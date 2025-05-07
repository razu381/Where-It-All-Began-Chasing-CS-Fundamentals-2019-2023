#include<stdio.h>

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);

    int can_follow = (2 * a) + 100;
    int remaining = can_follow  - b;
    printf("%d",remaining);
}
