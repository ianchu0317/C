#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <pthread.h>

// 3 Threads
#define THREADS 3

// Parameters struct 
struct parameters{
  long long min;
  long long max;
};

// Struct to store answers and the result
struct answers{
  long long *result;
  long long counter;
};

// Functions
void *find_armstrong_number(void *);
void *find_perfect_number(void *);
void *find_strong_number(void *);
void print_result(struct answers *);


// Main function
int main(int argc, char *argv[]){
  // User input data 
  struct parameters args;
  printf("Input lower limit: ");
  scanf("%lld", &args.min);
  printf("Input upper limit: ");
  scanf("%lld", &args.max);

  // Thread id declaration
  pthread_t tid[THREADS];
  int t_counter = 0;
  
  // Start searching armstrong numbers
  pthread_create(&tid[t_counter], NULL, find_armstrong_number, (void *) &args);
  t_counter += 1;
  // Start searching perfect numbers
  pthread_create(&tid[t_counter], NULL, find_perfect_number, (void *) &args);
  t_counter += 1;
  // Start searching strong numbers
  pthread_create(&tid[t_counter], NULL, find_strong_number, (void *) &args);

  t_counter = 0; 

  // Struct to storage data 
  struct answers *armstrong_numbers;
  struct answers *perfect_numbers;
  struct answers *strong_numbers;
  
  pthread_join(tid[t_counter], (void **) &armstrong_numbers);
  t_counter += 1;
  pthread_join(tid[t_counter], (void **) &perfect_numbers);
  t_counter += 1;
  pthread_join(tid[t_counter], (void **) &strong_numbers);


  // Print out result 
  printf("\nArmstrong numbers between %lld to %lld are: ", args.min, args.max);
  print_result(armstrong_numbers);

  printf("\nPerfect numbers between %lld to %lld are: ", args.min, args.max);
  print_result(perfect_numbers);

  printf("\nStrong numbers between %lld to %lld are: ", args.min, args.max);
  print_result(strong_numbers);
  

  // Free memory
  free(armstrong_numbers->result);
  free(armstrong_numbers);
  free(perfect_numbers->result);
  free(perfect_numbers);
  free(strong_numbers->result);
  free(strong_numbers);

  return 0;
}

/********************************************************************/
// Function to print out result 
void print_result(struct answers *answer){
  for (int i = 1; i < answer->counter; i++){
    printf("%lld, ", answer->result[i-1]);
  }
  printf("\n");
}

// Function to find armstrong numbers
void *find_armstrong_number(void *ptr){
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

// Function to find perfect number
void *find_perfect_number(void * ptr){
  struct parameters *limits = (struct parameters *) ptr;

  struct answers *answer = (struct answers *) malloc(sizeof(struct answers));
  answer->counter = 1;
  answer->result = (long long *) malloc(sizeof(long long) * answer->counter);
  
  long long sum;
  // For each number
  for (long long i = limits->min; i <= limits->max; i++){
    sum = 0;
    
    for (int x = 1; x <= i / 2; x ++){
      if (i % x == 0)
        sum += x;
    }

    // Store data in array    
    if (sum == i){
      answer->result[answer->counter - 1] = i;
      answer->counter += 1;
      answer->result = realloc(answer->result, sizeof(long long) * answer->counter);
    }

  }
  
  pthread_exit(answer);
}

void *find_strong_number(void *ptr){
  struct parameters *limits = (struct parameters *) ptr;

  struct answers *answer = (struct answers *) malloc(sizeof(struct answers));
  answer->counter = 1;
  answer->result = (long long *) malloc(sizeof(long long) * answer->counter);
  long long sum = 0;
  long long n, factorial;
 
  for (long long i = limits->min; i <= limits->max; i++){
     /* For all digits of number */
    n = i;
    while (n != 0){
      /* Find sum of factorials*/
      factorial = 1;
      for (int x = n % 10; x >= 1; x--){
        factorial *= x;
      }
      sum += factorial;
      n /= 10;
    }

    /* Print number if its strong number */
    if (sum == i){
      answer->result[answer->counter - 1] = i;
      answer->counter += 1;
      answer->result = realloc(answer->result, sizeof(long long) * answer->counter);
    }
    sum = 0;
  }
  
  pthread_exit(answer);
}
