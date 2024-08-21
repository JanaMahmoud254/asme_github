
#include <stdio.h> 

struct Shape{
    float radius;
    float side_length;
};

void circleArea(float *radius){
    float area = (22.0/7)*(*radius)*(*radius);
    printf("%.2f", area);
}

void squareArea(float *side_length){
    float area = (*side_length)*(*side_length);
    printf("%.2f", area);
}

int main(){

    int choice;
    printf("Calculate the area for: \n1.Circle\n2.Square\n");
    scanf("%d", &choice);
    
    switch(choice){
    case 1:
        struct Shape circle;
        printf("Enter Radius: ");
        scanf("%f", &circle.radius);
        circleArea(&circle.radius);
        break;
    
    case 2:
        struct Shape square;
        printf("Enter Side Length: ");
        scanf("%f", &square.side_length);
        squareArea(&square.side_length);
        break;
    
    default:
        printf("You should've entered 1, 2 or 3!");
        break;
    }


    return 0;
}


