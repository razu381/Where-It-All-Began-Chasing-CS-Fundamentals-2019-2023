#include<stdio.h>
#include<string.h>

unsigned int bin_to_dec(char s[]){
    int len = strlen(s);
    int ans = 0;
    for(int i = len-1, pow = 1; i >= 0; i--,pow *= 2){

        int bit = s[i] - '0';
        if(bit == 1){
            ans +=pow;
        }
    }
    return ans;
}


int main(){
    int ans = bin_to_dec("0010");
    printf("%d",ans);
}
