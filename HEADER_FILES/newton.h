#include <stdio.h>
#include <math.h>

int calculate_force()
{
    int mass, force, momentum;

    printf("Enter momentum of object : ");
    scanf("%d", &momentum);

    printf("Enter mass of object : ");
    scanf("%d", &mass);
    
    force = mass * momentum;

    printf("Force is %d N.", force);
}

int calculate_gravity(){
    double m1, m2, r;
    float G, F;
    G = 6.67 / 1e11;

    printf("Enter m1 of object : ");
    scanf("%d", m1);

    printf("Enter m2 of object : ");
    scanf("%d", m2);

    printf("Enter distance of objects : ");
    scanf("%d", r);

    F = (G * m1 * m2) / (r * r);
    
    printf("%f", F);
}