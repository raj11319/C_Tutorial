#include <stdio.h>
#include <math.h>
int main (){
    int height = 45;
    int radius = 24;
    float area;
    area = (2* 3.14 * radius * height) + (2  *3.14 *(radius * radius));
    printf("Area is %f", area);
    printf("Thank you ");
    return 0;
}