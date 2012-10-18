#include <stdio.h>

int main(){

    int n1 = 0;
    int n2 = 1;
    int counter = 0;
    int temp;
    double sum = 0;

    while (n2 < 4000000){
        
        temp = n2;
        n2 = n1 + n2;
        n1 = temp;
        
        if (n2 % 2 == 0){
           sum += n2; 
        }

        counter++;
    }

    printf("%f", sum);




}

