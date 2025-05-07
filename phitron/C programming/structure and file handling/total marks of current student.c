#include<stdio.h>


struct student{
    char name[100];
    int id;
    int marks;
    int total;
};


int main(){
    int n;
    scanf("%d",&n);
    struct student students[n];

    for(int i = 0; i < n; i++){
        scanf("%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
        int sum = 0;
        for(int j = 0; j < i; j++){
            if(students[i].id == students[j].id){
                sum += students[j].marks;
            }
        }
        int new_marks = sum + students[i].marks;
        students[i].total = new_marks;
    }
    //print all the marks
    for(int i = 0; i < n; i++){
        printf("%s %d %d %d \n",students[i].name, students[i].id, students[i].marks, students[i].total);
    }
}
