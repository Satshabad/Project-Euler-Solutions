#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int num);
char* strrev(char* str, int length);

int main(){

    int i;
    int j;
    int largest = 0;



    for (i = 999; i > 99; i--){

        for (j = 999; j > 99; j--){

            if (isPalindrome(i*j)){
                if (largest < i*j){
                    largest = i*j;
                }
            }

        }
        
    }

    printf("%d", largest);

    


}

int isPalindrome(int num){

    int length = 0;
    int temp = num; 
    char* str;
    char* reverseStr;
    
    while(temp != 0){
       temp = temp/10;
       length++;
    }

    str = malloc(length);

    sprintf(str, "%d", num);

    reverseStr = strrev(str, length);

    if( strcmp(str, reverseStr ) == 0){
        free(str);
        free(reverseStr);
        return 1;
    }

    free(str);
    free(reverseStr);
    return 0;




}

/* freeing is responsibility of the caller */
char* strrev(char* str, int length){

    int i;
    int j;
    char* newStr;

    newStr = strcpy(malloc(length), str);


    for(i = 0, j = length-1; i < j; i++, j--){
        char temp = newStr[i];
        newStr[i] = newStr[j];
        newStr[j] = temp;
    }

    return newStr;


}



