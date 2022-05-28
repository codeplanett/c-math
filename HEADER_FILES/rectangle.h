#include <stdio.h>
#include <math.h>

int a,b;

void initializeRectangle(){
   printf("Enter width of rectangle : ");
   scanf("%d", &a);

   printf("Enter height of rectangle : ");
   scanf("%d", &b);
}

void areaRectangle()
{
    printf("The area of initialized rectangle is : %d\n\n", a*b);
}

void perimeterRectangle()
{
    printf("The perimeter of initialized rectangle is : %d\n\n", 2 * ( a + b ));
}

void diagonal()
{
   int result;
   result = sqrt(a*a + b*b);
   printf("Diagonal of given rectangle is : %d\n\n", result);
}

void radiusOutOfRectangle()
{
    int result;
   result = sqrt(a*a + b*b);
   printf("Diagonal of given rectangle is : %d\n\n", result /2);
}