#include<stdio.h>
#include<string.h>


int main(){
    int num;
    scanf("%d",&num);
    char s[num+1];
    scanf("%s",s);
    int len = strlen(s);
    int z = 0;
    int n = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == 'z'){
            z++;
        }else if(s[i] == 'n'){
            n++;
        }
    }

    if(n > 0){
        for(int i = 0; i < n;i++){
            printf("1 ");
        }
    }
    if(z > 0){
        for(int i = 0; i < z;i++){
            printf("0 ");
        }
    }


}
