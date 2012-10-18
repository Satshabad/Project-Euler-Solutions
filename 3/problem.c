#include <stdio.h>



int main(){

    long highPrimeFactor = 0;
    long num = 600851475143;

    while(!isPrime(num)){
        long i;
        

        for(i = 2; i <= num; i++){

            if(((num % i) == 0) && isPrime(i)){

                if (i > highPrimeFactor){
                    highPrimeFactor = i;
                }

                num = num/i;
                break;
            }

        }
        
    }

    if(num > highPrimeFactor){
        highPrimeFactor = num;
    }

    printf("%ld", highPrimeFactor);

}


int isPrime(long p){
    int i;

    for (i = 2; i < p/2; i++){
        
        if(p % i == 0){
            return 0;
        }
    }
    return 1;
}
