//Cwmfjordbankglyphsvextquiz  >= 26 char
//Sphinxofblackquartzjudgemyvow  >= 29 char
//Jackdawslovemybigsphinxofquartz  >= 31 char


#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
    int num;
    scanf("%d",&num);
    bool is_empty;
    char s[num + 1];
    scanf("%s",s);

    //make all letter's small letter

    for(int i = 0; i < strlen(s);i++){
        if(s[i] < 'a'){
            s[i] += 32;
        }
    }

    printf("%s \n",s);


    //compare
    if(num < 26){
        printf("NO");
    }else{
        for(int i = 0; i < 26; i++){
            is_empty = false;
            int count = 0;
            for(int j = 0; j < strlen(s); j++){
                if(s[j] == alpha[i]){
                    count++;
                }
            }
        printf("%c >= %d \n",alpha[i],count);
        if(count == 0){
            is_empty = true;
            break;
        }else{
            is_empty = false;;
        }
        }
        if(is_empty == true){
            printf("NO");
        }else if(is_empty == false){
            printf("YES");
        }
    }
}
