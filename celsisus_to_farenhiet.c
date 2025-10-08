#include <stdio.h>
int main (){
    float temprature;
    printf("enter temprature in celsius \n", & temprature);
    scanf("%f", & temprature);
    printf("temprature in farenhiet is %f \n",(temprature * 9/5) + 32);
    printf("Thank you");
    return 0;
    
}
    //This code converts celsius to farenhiet...