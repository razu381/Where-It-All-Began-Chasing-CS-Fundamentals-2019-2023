#include<stdio.h>

void sort(int n, int a[]){
    for(int check = 0; check < n - 1; check++){
        for(int pos = check+1; pos < n; pos++){
            if(a[check] < a[pos]){
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
            }

        }
    }
}

int main(){
    int a[] = {9,8,7,6,5,4,3,21,60,4,5,6,6,3,34343,4,3,224,333,43323,553,33,534,53,345,3};
    int size = sizeof(a) / sizeof(a[0]);

    sort(size,a);

    for(int i = 0; i < size; i++){
        printf("%d ",a[i]);
    }
}
