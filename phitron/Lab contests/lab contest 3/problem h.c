#include<stdio.h>

int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    int array[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    int new_array[n];

    for(int i = 0; i < n; i++){
        if(d > n-1){
            d = 0;
        }
        new_array[i] = array[d];
         d++;
    }

    for(int i = 0; i < n; i++){
        printf("%d ",new_array[i]);

    }


}
