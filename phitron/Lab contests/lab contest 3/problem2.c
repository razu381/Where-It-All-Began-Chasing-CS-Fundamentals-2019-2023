#include<stdio.h>

int main(){
    int items;
    scanf("%d",&items);
    int num[items];
    int max_num = 0;
    int count = 0;
    for(int i = 0; i < items; i++){
        scanf("%d",&num[i]);
        if(num[i] > max_num){
            max_num = num[i];
        }
    }

    //printf("%d",max_num);

    for(int i = 0; i < items;i++){
        int remaining = max_num - num[i];
        count += remaining;
        num[i] += remaining;
        //printf("%d",num[i]);
    }
    printf("%d",count);
}
