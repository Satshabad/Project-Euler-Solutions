#include <stdio.h>

double sumOfSquareTo(int n);
double squareOfSumTo(int n);

int main(){

    printf("%lf", squareOfSumTo(100) - sumOfSquareTo(100));

}


double sumOfSquareTo(int n){

    int i;
    double sum = 0;

    for( i = 0; i <= n; i++){

        sum += i*i;

    }

    return sum;
}

double squareOfSumTo(int n){

    return ((n*(n+1))/2) * ((n*(n+1))/2);

}

