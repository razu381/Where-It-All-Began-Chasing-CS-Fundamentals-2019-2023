#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int j = 0; j < t; j++){
        //single test
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        //int len = strlen(s);
        int is_num = 0;
        for(int i = 0; i < n;i++){
            if(s[i] == '8' &&(n- i >= 11)){
                is_num = 1;
                //printf("Yes");
                break;
            }else{
                is_num = 0;
                //printf("No");
            }
        }

        if(is_num == 1){
            printf("YES \n");
        }else{
            printf("NO \n");
        }

    }//end of for loop

}
