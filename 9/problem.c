#include <stdio.h>

int main(){


    int i, j, k;

    for (i = 0; i <= 1000; i++) {

        for (j = 0; j <= 1000; j++) {

            for (k = 0; k <= 1000; k++) {

                if (i + j + k == 1000){

                    if(i*i + j*j == k*k){

                        if (i < k && j < k){

                            printf("%d\n", i*j*k);
                            break;

                        }
                    }
                }
            }
        }
    }


}
