#include <stdio.h>



int isPrime(long p);

int main(){
    
    long i = 2;
    int count = 0;

    while(count != 10001){

        if (isPrime(i)){
            printf("%ld \n", i);
            count++;
        }

        i++;
    }

    printf("%ld", i-1);
}

int isPrime(long p){
    int i;

    for (i = 2; i <= p/2; i++){
        
        if(p % i == 0){
            return 0;
        }
    }
    return 1;
}
