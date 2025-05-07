#include<stdio.h>
#include<string.h>


int main(){
    int a = 10;
    int *pa = &a;
    int **pq = &pa;

    printf("%d \n",a);
    printf("%d \n",*pa);
    printf("%d \n",**pq);

}
