#include<stdio.h>

struct student{
    int roll;
    int class;
    int marks;
};


int main(){
    int n;
    scanf("%d",&n);
    struct student students[n];
    int total_marks = 0;

    for(int i = 0; i < n; i++){
        scanf("%d %d %d",&students[i].roll,&students[i].class,&students[i].marks);
        total_marks += students[i].marks;
    }
    printf("%d",total_marks);
}
