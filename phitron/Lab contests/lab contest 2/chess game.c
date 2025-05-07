#include <stdio.h>
int main(){
    int num;
    int bjorn;
    int harland ;
    scanf("%d",&num);

    char result[num] ;
    scanf("%s",result);





    for(int i = 0 ;i < num; i++){
        if(result[i] == 'A'){
            bjorn += 1;
        }else if( result[i] == 'D'){
            harland += 1;
        }
    }


    if(bjorn > harland){
        printf("Anton");
    }else if(harland > bjorn){
        printf("Danik");
    }else if(harland == bjorn){
        printf("Friendship");
    }


}
