#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int door[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&door[i]);
    }
    //printf("%d %d %d %d %d %d %d %d %d %d",door[0],door[1],door[2],door[3],door[4],door[5],door[6],door[7],door[8],door[9]);

    for(int i = 0; i < n; i++){
        int counter = 0;
        for(int j = 1; j < n; j++){
            if( j == door[i]){
                counter++;
            }
        }
        printf("%d == %d \n",i,counter);
    }
}
