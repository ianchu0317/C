#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <pthread.h>


struct parameters{
  long long min;
  long long max;
};

struct answers{
  long long *result;
  long long counter;
};


void * find_armstrong(void *ptr){
  struct parameters *limits = (struct parameters *) ptr;

  struct answers *answer = (struct answers *) malloc(sizeof(struct answers));
  answer->counter = 1;
  answer->result = (long long *) malloc(sizeof(long long) * answer->counter);

  int sum; // Sum power of digits
  int currentNumber, currentDigit; // Copy of the current number and curretn digit
  int digitsCounter;

  // For each number in range
  for (long long i = limits->min; i <= limits->max; i++){
    currentNumber = i;
    digitsCounter = 0;
    sum = 0;

    while (currentNumber != 0){
      currentNumber /= 10;
      digitsCounter += 1;
    }

    currentNumber = i;

    while (currentNumber != 0){
      currentDigit = currentNumber % 10;
      sum += pow(currentDigit, digitsCounter);
      currentNumber /= 10;
    }

    if (sum == i){
      answer->result[answer->counter - 1] = i;
      answer->counter += 1;
      answer->result = realloc(answer->result, sizeof(long long) * answer->counter);
    }
  }

  pthread_exit(answer);
}

int main(){
  struct parameters args;
  printf("Input lower limit: ");
  scanf("%lld", &args.min);
  printf("Input upper limit: ");
  scanf("%lld", &args.max);

  pthread_t tid;
  pthread_create(&tid, NULL, find_armstrong, (void *) &args);
  struct answers *answer;
  pthread_join(tid, (void **) &answer);

  printf("\nArmstrong numbers between %lld to %lld are: ", args.min, args.max);
  for (int i = 1; i < answer->counter; i++){
    printf("%lld, ", answer->result[i-1]);
  }

  free(answer->result);
  free(answer);
  printf("\n");
  return 0;
}
