#include <stdio.h>
#include <math.h>

void area(int a, int b)
{
    printf("%d", a*b);
}

void perimeter(int a, int b)
{
    printf("%d", 2 * ( a + b ));
}

void diagonal(int a, int b)
{
   int result;
   result = sqrt(a*a + b*b);
   printf("%d", result);
}