#include<stdio.h>
#include<math.h>

int main (){
    int a;
    printf("enter a number ");
    scanf("%d", & a);
    if (a%97 == 0)
    {
        printf("number is divisible by 97\n");
        printf("remainder is %d", a%97);
        printf("quotient is %d", a/97);
    }
    else
    {
        printf("not divisible");
    }
    return 0;
    //this number check the divisibility from 97...
    
    
}