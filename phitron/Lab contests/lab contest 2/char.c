#include<stdio.h>
#include<stdbool.h>
int main(void){
   char s[9];
        scanf("%s",s);

        for(int i = 0; i < 9; i++){
            int counter = 0;
            char c = s[i];
            int sd = c - '0';
            for(int j = 0; j < 9; j++){
                if(i == sd){
                    counter++;
                }
            }
        if(counter == 0){
            printf("%d",i);
            break;
            }
        }//for

}

