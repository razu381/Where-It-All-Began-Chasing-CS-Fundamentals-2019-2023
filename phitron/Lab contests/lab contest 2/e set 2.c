#include <stdio.h>

int main(void){
    //int a,b,c,d,e,f,x;
    //scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&x);
    int a,c,x;
    scanf("%d %d %d",&a,&c,&x);
    //takashaki
    while(a + c < x){
           a += a;
           c += c;

    }
     printf(" takashaki time = %d \n",a);


//    if( x < a){
//        a = x;
//    }
//    int t_distance = a * b;
//    printf(" takashaki distanace = %d \n",t_distance);
//
//    //Aoki
//    if(d + f < x){
//        int t_rem_time = x - (d + f) ;
//           d += t_rem_time;
//    }else if( x < d){
//        d = x;
//    }
//    int a_distance = d * e;
//    printf("aokoi distance = %d \n",a_distance);
//
//    if( t_distance > a_distance){
//        printf("Takahashi");
//    }else if(t_distance == a_distance){
//        printf("draw");
//    }else{
//        printf("Aoki");
//    }
//
//
//
}
