#include<stdio.h>
#include<string.h>


int main(){
    char s[1001];
    scanf("%s",s);
    char t[] = "heidi";
    int len = strlen(s);
    int j = 0;
    for(int i = 0;i < len;i++){
        if(s[i] == t[j]){
            j++;
        }
        if(j == 5){
            break;
        }
    }
    if(j == 5){
        printf("YES");
    }else{
        printf("NO");
    }
}
