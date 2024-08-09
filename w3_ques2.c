
#include <stdio.h>

int getBinary(int num); //prototype

int main(){

    int t; //test cases
    scanf("%d", &t);

    while(t--){
        int num;
        scanf("%d", &num);

        printf("%d\n", getBinary(num));
    }

    return 0;
}

int getBinary(int num){
    int counter = 0;
    while(num >0){
        if(num%2 != 0){ //if we enter this if statement, that means in binary representation the number is 1
            counter ++; //counter only increments whenever it's 1
        } 
        num/=2;
    }

    return counter;
}
