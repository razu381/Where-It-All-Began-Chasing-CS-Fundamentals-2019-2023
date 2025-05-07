#include<stdio.h>
#include<stdbool.h>
int main(void){
    int n = 1;
    bool is_dup = false;
    int a[] = {10,20,10};
    int b[n];

    int lena = sizeof(a) / sizeof(a[0]);
    int lenb = sizeof(b) / sizeof(b[0]);

    for(int i = 0;  i < lena; i++){
        for(int j = 0; j < lenb; j++){
            if(a[i] == b[j]){
                is_dup = true;
                break;
            }
        }
        if(is_dup == false){
            b[n-1] = a[i];
            n++;
        }
    }
    //print b
    for(int i = 0; i < lenb; i++){
        printf("%d",b[i]);
    }
}
