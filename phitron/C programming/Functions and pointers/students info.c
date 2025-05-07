#include<stdio.h>
#include<string.h>

//birth date data type
struct b_date{
    int day;
    int month;
    int year;
};

//student data type
struct students{
    char name[100];
    int class;
    int roll;
    struct b_date b_day;
};

//get input for student data type

struct students get_info(){
    struct students student;
    printf("Name: ");
    gets(student.name);
    //first one is to escape the enter
    gets(student.name);
    printf("Class: ");
    scanf("%d",&student.class);
    printf("Roll: ");
    scanf("%d",&student.roll);
    printf("Date of birth: ");
    scanf("%d %d %d",&student.b_day.day,&student.b_day.month,&student.b_day.year);
    return student;
};

//print student

void print_info(struct students student){
    printf("Name: %s \n",student.name);
    printf("Class: %i \n",student.class);
    printf("Roll: %i \n",student.roll);
    printf("Date of birth: %d-%d-%d",student.b_day.day,student.b_day.month,student.b_day.year);
    printf("\n");
}

int main(void){
    int n;
    scanf("%d",&n);
    struct students student_list[n];

    for(int i = 0; i < n; i++){
        printf("Enter student %d info: \n",i+1);
        student_list[i] = get_info();
    }

    for(int i = 0 ; i < n; i++){
        printf("Student no. %d info: \n",i+1);
        print_info(student_list[i]);
    }
}
