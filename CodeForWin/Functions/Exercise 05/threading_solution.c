#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <pthread.h>

#define THREADS 3

// Struct to limits, lower limit and upper limit
struct parameter{
  long long lowerLimit;
  long long upperLimit;
};

void* checkArmstrong(void *argv);
void* checkPerfect(void *argv);
void* findStrong(void *argv);

int main(int argc, char *argv[]){
  // User input data, exit if not provided argument
  if (argc < 3){
    perror("\nUsage: <program> <lower limit> <upper limit>\n");
    exit(1);
  }

  // Convert to long long variable type
  struct parameter limits[THREADS];
  for (int i = 1; i <= THREADS; i++){
    limits[i-1].lowerLimit = atoll(argv[1]);
    limits[i-1].upperLimit = atoll(argv[2]);
  }

  // Define thread
  pthread_t thread_id[THREADS];
  int thread_count = 0;

  long long *strong_numbers;
  long long 
  printf("Strong Numbers between %lld to %lld are: ", limits[thread_count].lowerLimit, limits[thread_count].upperLimit);

  printf("Perfect Numbers between %lld to %lld are: ", limits[thread_count].lowerLimit, limits[thread_count].upperLimit);
  printf("Perfect numbers between %lld to %lld are: ", limits[thread_count].lowerLimit, limits[thread_count].upperLimit);

  return 0;
}


// Function to find strong Numbers
void *findStrong(void *argv){
  struct parameter *limit = (struct parameter *) argv;

  int current_number;
  long long copy_num;
  long long factorial;
  long long sum;

  // For each number
  for (long long i = limit->lowerLimit; i <= limit->upperLimit; i++){
    // Reset variables
    copy_num = i;
    sum = 0;

    // For each digit
    while (copy_num != 0) {

      current_number = (int) copy_num % 10;
      factorial = 1;

      //Find factorial
      while (current_number > 0){
        factorial *= current_number;
        current_number -= 1;
      }
      sum += factorial;

      copy_num /= 10;
    }

    //Save if found
    if (sum == i){
      printf("%d, ", i);
    }
  }
  printf("\n\n");
}

void* checkArmstrong(void *argv){
  struct parameter *limit = (struct parameter *) argv;
  /* Find number digits len */
  int digitsCounter = 0;
  int power;
  long long sum;
  long long tempNum;
  for (long long i = limit->lowerLimit; i <= limit->upperLimit; i++){
    tempNum = i;
    while (tempNum != 0){
      tempNum /= 10;
      digitsCounter++;
    }
    /* Sum the power of digits to digits length */
    power = digitsCounter;
    sum = 0;
    tempNum = i;

    while (tempNum != 0){
      sum += pow((tempNum % 10), power);
      tempNum /= 10;
      digitsCounter++;
    }

    if (sum == i){
        printf("%d, ", i);
    }
  }

  printf("\n\n");
}

/* Check perfect number */
void* checkPerfect(void *argv){

  struct parameter *limit = (struct parameter *) argv;
  long long sum;

  for (long long i = limit->lowerLimit; i <= limit->upperLimit; i++){
    sum = 0;
    for (long long x = 1; x <= n / 2; x ++){
      if (i % x == 0){
        sum += x;
      }
    }

    if (sum == i){
      printf("%d, ", i);
    }
  }
  printf("\n\n");
}
