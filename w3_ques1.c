
#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num); //taking number as input

    for(int i=1; i<=num; i++){
        for(int k=1; k<=num-i; k++){
            printf(" ");
        }

        for(int j=1; j<=i*2-1; j++){
            printf("*");
        }

        printf("\n");
    }

    for(int i=num; i>=1; i--){
        for(int k=1; k<=num-i; k++){
            printf(" ");
        }

        for(int j=1; j<=i*2-1; j++){
            printf("*");
        }

        printf("\n");
    }


    return 0;
}

//n=4
//    i       *   spaces
//    1       1   3
//    2       3   2
//    3       5   1
//    4       7   0

//* => i*2-1
//spaces => n-1,2,3,4
