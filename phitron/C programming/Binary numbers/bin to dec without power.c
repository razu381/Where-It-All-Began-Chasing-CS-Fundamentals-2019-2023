#include<stdio.h>
#include<string.h>

unsigned int bin_to_dec(char s[]){
    int len = strlen(s);
    int ans = 0;
    for(int i = 0; i <= len - 1; i++){

        int bit = s[i] - '0';
        ans = ans*2+bit;
    }
    return ans;
}


int main(){
    int ans = bin_to_dec("0010");
    printf("%d",ans);
}

