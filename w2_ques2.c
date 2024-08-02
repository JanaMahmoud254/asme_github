
#include <stdio.h>

int main(){

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int counter = 0;

    if(a>b){
        if(b>c){
            if(c>d){
                printf("Yes");
                counter++;
            }
        }
    }

    if(a<b){
        if(b<c){
            if(c<d){
                printf("Yes");
                counter++;
            }
        }
    }

    if(counter == 0){
        printf("No");
    }

    return 0;
}

