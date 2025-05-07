#include<stdio.h>
// 2 1 3 4 5
void sort(int n, int* a){
    int min = a[0];
    for(int i = 0; i < n;i++){
        for(int j = i+1; j < n; j++){
            if(a[j] < a[i]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int a[] = {5,4,3,2,1};
    int size = sizeof(a) / sizeof(a[0]);
    sort(size,a);

    for(int i = 0; i < size;i++){
        printf("%d ",a[i]);
    }
}
