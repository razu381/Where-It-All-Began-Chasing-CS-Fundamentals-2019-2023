#include<stdio.h>


int sort(int n, int a[]){
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
    }
}



int main(){
    int a[] = {20,50,30,10,5,4,99,87,56,0,90,197};
    int size = sizeof(a) / sizeof(a[0]);
    sort(size,a);

    for(int i = 0; i < size; i++){
        printf("%d ",a[i]);
    }
}
