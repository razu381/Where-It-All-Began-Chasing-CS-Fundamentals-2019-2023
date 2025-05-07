#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++){

        char b[101];
        scanf("%s",&b);

        //printf("testcase = %d \n",t);

        //for(int i = 0; i < strlen(b);i++){
        //printf("%c",b[i]);
        //}


        for(int i = 0; i < strlen(b);i = i+2){
            printf("%c",b[i]);
        }
        printf("%c \n",b[strlen(b) - 1]);

        }

}
