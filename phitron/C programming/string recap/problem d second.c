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
        int is_triple[] = {0};
        int size = sizeof(is_triple) / sizeof(is_triple[0]);
        for(int i = 0;i < n;i++){
            counter[values[i]]++;
            if(counter[values[i]] >= 3){
               is_triple[i]++;
            }
        }
        printf("size = %d",size);

        for(int i = 0; i < size;i++){
            printf("position %d = %d",i,is_triple[i]);
        }
//        for(int i = size - 1; i >=0;i--){
//            if(is_triple[i] != 0){
//            printf("%d\n",i);
//            }else
//            {printf("-1 \n");}
//        }


    }

}

