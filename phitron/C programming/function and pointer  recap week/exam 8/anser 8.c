
#include<stdio.h>


////Has return, has parameter

int odd_even(int num){
    if(num % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}

int main(void){
    int n;
    scanf("%d",&n);
    int res = odd_even(n);
    if(res == 0){
        printf("Even \n");
    }else{
        printf("Odd \n");
    }
}

//No return + Has parameter

void odd_even(int num){
    if(num % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}

int main(void){
    int n;
    scanf("%d",&n);
    odd_even(n);
}

//Has return, no parameter

int odd_even(void){
    int num;
    scanf("%d",&num);
    if(num % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}

int main(void){
    int res = odd_even();
    if(res == 0){
        printf("Even \n");
    }else{
        printf("Odd \n");
    }
}




//No return , no parameter

void odd_even(void){
    int num;
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("Even \n");
    }else{
        printf("Odd \n");
    }
}

int main(){
    odd_even();
}
