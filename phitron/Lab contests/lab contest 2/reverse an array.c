#include<stdio.h>

int main(void){
//    int array[5] = {3,4,5,6,8};
//    int len = sizeof(array) / sizeof(array[0]) - 1;
//    int reversed[5];
//
//
//    for(int i = 0; i < 5; i++){
//        reversed[i] = array[len-i];
//    }
//    printf("Printed array = ");
//
//    for(int i = 0; i <5; i++){
//        printf("%d ",reversed[i]);
//    }



//    int a[5] = {1,2,6,4,8};
//    int len = sizeof(a) / sizeof(a[0]);
//
//    for(int i = 0,j = 1; i < len; i++,j--){
//        int temp = 0;
//        temp = a[i];
//        a[i] = a[len-j];
//        a[len-j] = a[temp];
//
//        printf("%d ",a[i]);
//    }


        char s[9];
        scanf("%s",&s);

        for(int i = 0; i < 9; i++){
            int counter = 0;
            for(int j = 0; j < 9; j++){
                if(i == s[j]){
                    counter++;
                }
            }
        if(counter == 0){
            printf("%d",i);
            break;
        }
        }//for



}//main
