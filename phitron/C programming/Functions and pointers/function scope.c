#include<stdio.h>


void change_value(int a, int b);


int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    change_value(a,b);
    printf("\n");
    printf("A = %d AND B = %d",a,b);
}

void change_value(int a, int b){
    a = 50;
    b = 500;

    printf("A = %d AND B = %d",a,b);

}
