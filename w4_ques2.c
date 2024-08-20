
#include <stdio.h> 
#include <stdbool.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int array[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &array[i][j]);
        }
    }

    int num;
    scanf("%d", &num);

    bool found = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(array[i][j] == num){
                found = true;
                printf("will not take number");
                break;
            }
        }
    }
    if(found == false){ printf("will take number"); }
    

    return 0;
}


