#include <stdio.h>

int main(void){
    int s,t,x;
    scanf("%d %d %d",&s,&t,&x);

    float new_x = x + .30;

    //printf("%.2f",new_x);
    if(s < t){
        if (t ==0){
            t = 24;
        }

        if( new_x >= s && new_x <= t ){
            printf("Yes");
        }else {
            printf("No");
        }
    }
    else if ( s > t){
        if( new_x <= s && new_x >= t){
            printf("No");
        }else{
            printf("Yes");
        }

    }
}

//(new_x <= (float)s && new_x >= (float)t)
