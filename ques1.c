
#include <stdio.h>

int main(){

    int num; //declare variable 
    scanf("%d", &num); //using user input to get number

    int sum = (num*(num+1))/2; //summation rule
    printf("%d", sum); //output the summation

    return 0;
}
