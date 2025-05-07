#include<stdio.h>

void shift_array(int a[],int len, int k){
    for(int i = 0; i < len; i++){
        if(k > len-1){
            k = 0;
        }
        a[i] = a[k];
        printf("%d \n",a[i]);
        k++;
    }
}


int main(){
    int a[] = {1,2,3,4,5};
    int len = sizeof(a) / sizeof(a[0]);
    int k = 2;
    shift_array(a,len,k);
}
