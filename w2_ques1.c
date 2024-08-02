
#include <stdio.h> 
#include <math.h> 
 
int main() 
{ 
        float num; //declare variable of type float
        scanf("%f",&num); //take number as input
 
        int x = ceil(num); //rounding float up, then storing it as integer in variable x
        if (x == num){ 
            printf("Integer"); 
        } 
        else{ 
                printf("Float"); 
        } 


        return 0; 
} 