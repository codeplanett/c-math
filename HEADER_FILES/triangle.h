#include <stdio.h>
#include <math.h>

int areaTriangle(int a, int b)
{
   int k1, k2, area;
   
   area = (a * b)/2;
   printf("\n\nThe area of this triangle is  : %i \n\n",area);
   return 0;
}

int perimeterTriangle(int a, int b, int c)
{
   printf("%d",a+b+c);
   return 0;
}

void print_triangle()
{
   int rows, star, spaces;
        int number_of_stars = 6;
        int number_of_rows = number_of_stars;

        for (rows=1; rows <= number_of_rows; rows++) {
                for (spaces=1; spaces <= number_of_stars; spaces++) {
                        printf(" ");
                }
                for (star=1; star <= rows; star++) {
                        printf("*");
                        printf(" ");
                }
                printf("\n");
                number_of_stars = number_of_stars - 1;
        }
}