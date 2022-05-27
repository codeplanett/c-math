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
        return 0;
}