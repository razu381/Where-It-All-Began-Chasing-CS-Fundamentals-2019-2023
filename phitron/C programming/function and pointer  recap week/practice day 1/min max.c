
#include<stdio.h>


void set_min_max(int *a, int *b){
    *a = 1;
    *b = 1000;

}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d \n",a,b);
    set_min_max(&a,&b);
    printf("%d %d",a,b);
}
