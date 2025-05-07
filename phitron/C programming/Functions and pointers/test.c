#include<stdio.h>

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

int main(void){

    struct students s1;
    s1.b_day.day = 3;

    printf("%d",s1.b_day.day);
}
