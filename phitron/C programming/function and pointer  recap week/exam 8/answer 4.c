#include<stdio.h>
#include<string.h>

void foo(void){
    printf("foo\n");
    bar();
}
void bar(void){
    printf("bar\n");
}


int main(){
    foo();
}
