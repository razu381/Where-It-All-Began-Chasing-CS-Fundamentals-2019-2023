#include<stdio.h>

int main(){
    int x,a,b,c;
    scanf("%d",&x);
    int total = 0;

    c = x % 10;
    x /= 10;
    b = x % 10;
    x /= 10;
    a = x % 10;
    x /= 10;
    int abc = a *100 + b * 10 + c;
    int bca = b *100 + c * 10 + a;
    int cab = c * 100 + a * 10 + b;
    printf("%d ",abc + bca + cab);

}
