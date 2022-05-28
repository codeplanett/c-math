#include <stdio.h>
#include <math.h>

int areaRectangle(int a, int b)
{
    printf("%d", a*b);
    return 0;
}

void perimeterRectangle(int a, int b)
{
    printf("%d", 2 * ( a + b ));
}

void diagonal(int a, int b)
{
   int result;
   result = sqrt(a*a + b*b);
   printf("%d\n", result);
}