#include <stdio.h>
int main (){
    float time, rate_of_interest, principal;
    printf("enter time period \n", & time);
    scanf("%f", & time);
    printf("enter rate of interest \n", & rate_of_interest);
    scanf("%f", & rate_of_interest);
    printf("enter principal \n", & principal);
    scanf("%f", & principal);
    printf("Simple Interest  is %f \n",(time* rate_of_interest* principal) /100);
    printf("Thank you");
    return 0;
    
}
// This code finds Simple Interest..