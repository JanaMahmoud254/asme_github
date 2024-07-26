
#include <stdio.h>


int main(){

    int num1, num2; //declaring two variables
    scanf("%d %d", &num1, &num2); //using user input to get value of two variables

    //output
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);

    return 0;
}
