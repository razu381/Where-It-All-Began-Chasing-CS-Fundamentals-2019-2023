#include<stdio.h>
#include<string.h>
int main(void){
    int t;
    scanf("%d",&t);
    for(int j = 0; j < t; j++){
        int counter[10] = {0};
        int n;
        scanf("%d",&n);
        int values[n];
        for(int i = 0;i < n;i++){
            scanf("%d",&values[i]);
        }

        for(int i = 0;i < n;i++){
            counter[values[i]]++;
        }
        int is_triple = 0;
        for(int i = 0 ; i < 10 ;i++){
            if(counter[i] >= 3){
                is_triple = i;
                //break;
            }
        }
        if(is_triple != 0){
            printf("%d\n",is_triple);
        }else{printf("-1 \n");}

    }

}
