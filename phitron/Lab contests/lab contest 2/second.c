#include<stdio.h>

int main(void){
    int num[7] = {10, 20, 50, 40, 50, 10, 40};
    int sorted[7];
    int lennum = sizeof(num)/sizeof(num[0]);
    int lensort = sizeof(sorted)/sizeof(sorted[0]);
    //printf("%d",len);

    for(int i = 0; i < lennum;i++){
            int duplicate = 5;
        for(int j = 0; j < lensort;j++){
            if(num[i] != sorted[j]){
                duplicate = 0;
            }else{
                duplicate = 1;
            }
        }
        if(duplicate == 0){
            sorted[i] = num[i];
        }
        printf("%d ",sorted[i]);
    }
//    //print sorted array
//    for(int i = 0; i < 7; i++){
//        printf("%d ",sorted[i]);
//    }
}
