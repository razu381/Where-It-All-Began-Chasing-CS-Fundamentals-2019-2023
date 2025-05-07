#include <stdio.h>

int main(void){
    int pupil = 40;
    int specialist = 70;
    int expert = 90;
    int x;
    scanf("%d",&x);

    if(x >= 0 && x <= 100){

        if(x >= 0 && x < 40){
            x = (pupil - x);
            printf("%d",x);
        }else if(x >= 40 && x < 70){
            x = (specialist - x);
            printf("%d",x);
        }else if(x >= 70 && x < 90){
            x = (expert - x);
            printf("%d",x);
        }else if( x >= 90 && x <= 100){
            printf("Expert");
        }
    }
}
