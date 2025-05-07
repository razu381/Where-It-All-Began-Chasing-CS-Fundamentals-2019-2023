#include<stdio.h>



int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int* pa = &a;
    int* pb = &a[n-1];

    int temp = pa;
    *pa = *pb;
     *pb = *temp;

    for(int i = 1; i < n - 2; i++){
        pa += 4;
        pb -+ 4;
        *pb = *pa;
    }

    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }

}
