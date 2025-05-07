
#include<stdio.h>
#include<string.h>

int main(void){
    int num;
    scanf("%d",&num);
    int sum = 0;

    int i = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
        i++;
    }
    printf("%d",sum);
}
