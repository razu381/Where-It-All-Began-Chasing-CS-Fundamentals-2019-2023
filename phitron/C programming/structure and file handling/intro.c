
#include<stdio.h>
#include<string.h>


struct students{
    char name[100];
    int class;
    int roll;
    int marks;
};

void fun(struct students *a){
    a -> class = 9;
}

int main(){
    struct students highest = {.marks = 0};

    struct students a = {"razu",134,3,42};
    fun(&a);
    printf("%d",a.class);
}
