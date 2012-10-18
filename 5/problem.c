#include <stdio.h>

int main(){

    int i = 2;

    while(1){
            
        if (i % 20 == 0 &&
            i % 19 == 0 &&
            i % 18 == 0 &&
            i % 17 == 0 &&
            i % 16 == 0 &&
            i % 15 == 0 &&
            i % 14 == 0 &&
            i % 13 == 0 &&
            i % 12 == 0 &&
            i % 11 == 0){
            
            printf("%d", i);
            break;
        }

        i = i+2;
    }
}
