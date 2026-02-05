/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/
#include<stdio.h>
#include <math.h>
int main (){
    int subjectA;
    int subjectB;
    int subjectC;
    printf("enter the marks of subject A ");
    scanf("%d", & subjectA);
    printf("enter the marks of subject B ");
    scanf("%d", & subjectB);
    printf("enter the marks of subject C ");
    scanf("%d", & subjectC);
    float total = (((subjectA + subjectB + subjectC)/300)*100);
    if ((total >= 40) && subjectA >= 33, subjectB >= 33, subjectC >= 33)
    {
        printf("student is pass");
    }
    else{
        printf("Student is fail");
    }
    return 0;


}