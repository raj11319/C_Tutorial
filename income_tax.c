#include <stdio.h>
#include <math.h>
int main () {
    float income ;
    printf("enter your income in lacs ");
    scanf("%f", & income);
    if(income <= 2.5){
        printf("no income tax " );
    }
    if(income>=2.5 && income<=5.0)
    {
        printf("income tax is 15 percent\n" );
        printf("%f", (income *15)/100);
    }
       if(income>=5.0 && income<=10.0)
    {
        printf("income tax is 20 percent\n" );
        printf("%f", (income *20)/100);
    }
       if(income>10)
    {
        printf("income tax is 30 percent\n" );
        printf("%f", (income *30)/100);
    }
    return 0;
    

    
    
}


/*Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
                              Income Slab                       Tax  
                  2.5 – 5.0L                               5% 
                5.0L - 10.0L                          20% 
                Above 10.0L                         30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/