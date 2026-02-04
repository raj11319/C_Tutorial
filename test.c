#include <stdio.h>
#include <math.h>
int main () {
    int x;
    int y;
    printf ("enter the value of x" ,& x);
    scanf ("%d",& x);
    printf ("enter the value of y" ,& y);
    scanf ("%d",& y);
    printf ("sum is %d", x+y);
    return 0;
}