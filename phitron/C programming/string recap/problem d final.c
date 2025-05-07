#include<stdio.h>
#include<string.h>
int main(void){
    int t;
    scanf("%d",&t);
    for(int j = 0; j < t; j++){
        int counter[200001] = {0};
        int n;
        scanf("%d",&n);
        int values[n];
        int is_triple = -1;
        for(int i = 0;i < n;i++){
            scanf("%d",&values[i]);
             counter[values[i]]++;
             if(counter [values[i]] >= 3){
                is_triple = values[i];
            }
        }

//        for(int i = 0;i < n;i++){
//            counter[values[i]]++;
//        }
//
//        int is_triple = -1;
//        for(int i = 0; i < 200001; i++){
//            if(counter[i] >= 3){
//                is_triple = i;
//            }
//        }


        printf("%d \n",is_triple);



    }

}
