#include <stdio.h>


int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int total = 0;

    for(int i = a; i >= a && i <= b;i++){
        total += 1;
    }
    printf("%d",total);
}
