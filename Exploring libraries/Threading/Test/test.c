#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

long long sume = 0;
void* sum(void* argv){
    long long *number = (long long *) argv;
    long long num = *number;
    long long i = 0;
    for (long long i = 0; i <= num; i++){
        sume += i;
    }

    pthread_exit(0);
}


int main(){
    /* User input data */
    long long num;
    printf("Input num: ");
    scanf("%lld", &num);
    __fpurge(stdin);

    /* Thread ID (process ID) */
    pthread_t thread_id;

    /* Thread attributes */
    pthread_attr_t attr;
    pthread_attr_init(&attr);

    pthread_create(&thread_id, &attr, sum, &num);

    pthread_join(thread_id, NULL);

    printf("%lld\n", sume);
    return 0;
}
