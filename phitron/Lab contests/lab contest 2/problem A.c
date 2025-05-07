#include <stdio.h>

int main(void){
    int n,k,a;
    scanf("%d %d %d",&n,&k,&a);

    while(k > 1){
        a++;
        if (a > n){
            a = 1;
        }
        k--;
    }
    printf("%d",a);

}
