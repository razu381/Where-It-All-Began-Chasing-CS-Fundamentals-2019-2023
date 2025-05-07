#include<stdio.h>


int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int min = 1;

    for(int i = 0; i < n; i++){
        int a = min * 2;
        int b = min + k;

        if(a < b){
            min = a;
        }else{
            min = b;
        }
    }
    printf("%d",min);
}
