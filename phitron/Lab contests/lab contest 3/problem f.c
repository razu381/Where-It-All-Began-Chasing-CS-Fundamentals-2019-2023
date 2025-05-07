#include<stdio.h>
#include<string.h>


int main(){
    long long n ;
    scanf("%lld",&n);
    char s[256];
    sprintf(s, "%lld", n);
    //printf("%s\n", s);
    int good_digit = 0;
    int len = strlen(s);
    //printf("%d \n",len);

    for(int i = 0; i < len; i++){
        if(s[i] == '4' || s[i] == '7'){
            good_digit++;
        }
    }
    //printf("%d",good_digit);

    if(good_digit == 4 || good_digit == 7){
        printf("YES");
    }else{
        printf("NO");
    }
}
