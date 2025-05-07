#include<stdio.h>


int is_sorted(int sz, int a[]){
    for(int c = 0; c < sz; c++){
        for(int d = c+1; d < sz; d++){
            if(a[c] > a[d]){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int sorted[] = {50,5,4,3,54,34,3,3};
    int sz = sizeof(sorted) / sizeof(sorted[0]);

    int res = is_sorted(sz,sorted);

    if(res == 0){
        printf("Array is sorted");
    }else{
        printf("Array is not Sorted, need to be sorted");
    }

}
