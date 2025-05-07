#include<stdio.h>
#include<string.h>


int main(){
    int count = 0;
    char s[100];
    fgets(s,100,stdin);
    //heyya
    for(int i = 0; i < strlen(s)-1;i++){
        int freq = 0;
        for(int j = 0; j < strlen(s);j++){
            if(s[i] == s[j]){
                freq++;
            }
        }
        if(freq == 1){
            count++;
        }
    }


    printf("%d \n",count);

    if(count % 2 == 0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }

}




