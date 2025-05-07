#include<stdio.h>
#include<string.h>

struct date{
    int day;
    int month;
    int year;
};

struct students{
    char name[100];
    int class;
    int roll;
    struct date dob;
};

//print date function

void print_date(struct date days){
    printf(" Date of birth: %d-%d-%d",days.day,days.month,days.year);
}

//print a structure funciton
void printstructure(struct students student){
    printf(" Name: %s \n class: %d\n Roll No: %d \n",student.name,student.class,student.roll);
    print_date(student.dob);
}

//get date input

struct date input_date(){
    struct date date;
    scanf("%d %d %d",&date.day,&date.month,&date.year);
    return date;
};

//get input from the user function

struct students input_student( ){
    struct students s1;
    printf("Name: ");
    gets(s1.name);
    gets(s1.name);
    //scanf("%s",s1.name);
    printf("\nClass: ");
    scanf("%d",&s1.class);
    printf("\nRoll: ");
    scanf("%d",&s1.roll);
    printf("\nDate of birth: ");
    s1.dob = input_date();
    return s1;
}
int main(void){
    int n;
    printf("Enter the number of Students: ");
    scanf("%d",&n);
    struct students student_list[n];
    for(int i = 1; i <= n; i++){
        printf("Input student %d info \n",i);
        student_list[i-1] = input_student();
    }

    for(int i = 1; i <= n; i++){
       printstructure(student_list[i-1]);
    }
}
