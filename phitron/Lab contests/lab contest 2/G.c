#include <stdio.h>

int main(){
    int a,b,c,d,e,f,x,t1 = 0,t2 = 0,d1,d2;
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&x);

    for(int i = 0; i < x;i += a+c){
        if((x-i) < a){
            t1 += x - i;
        }else if( (x - i) > a){
            t1 += a;
        }

    }
    for(int i = 0; i < x;i += d+f){
        if((x-i) < d){
            t2 += x - i;
        }else if( (x - i) > d){
            t2 += d;
        }

    }

    d1 = t1 * b;
    d2 = t2 * e;

    if(d1 == d2){
        printf("Draw");
    }else if(d1 > d2){
        printf("Takahashi");
    }else{
        printf("Aoki");
    }

}
