#include <stdio.h>
#include <math.h>

int area(int a, int b, char type[99])
{
   int k1, k2, area;
   
   area = (a * b)/2;
   printf("\n\nThe area of this triangle is  : %i \n\n",area);
}

int perimeter(int a, int b, int c)
{
   printf("%d",a+b+c);
}