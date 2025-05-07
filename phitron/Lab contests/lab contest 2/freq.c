#include<stdio.h>

int main(){
    int rating [5] = {2,3,4,5,5};

    int count[6] = {0};

    for(int i = 0; i < 5; i++){
        int idx = rating[i];
        count[idx]++;
    }
    for(int i = 1; i <= 5; i++){
        printf("%d >= %d \n",i,count[i]);
    }
}
