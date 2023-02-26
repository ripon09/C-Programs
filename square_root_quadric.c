#include <stdio.h>
#include <math.h>

void find_roots(float a, float b, float c, float *root1, float *root2);

int main()
{
    float a, b, c, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    find_roots(a, b, c, &root1, &root2);

    if(root1 == root2)
        printf("Root of the quadratic equation is: %0.2f", root1);
    else
        printf("Roots of the quadratic equation are: %0.2f and %0.2f", root1, root2);

    return 0;
}

void find_roots(float a, float b, float c, float *root1, float *root2)
{
    float discriminant;

    discriminant = b*b - 4*a*c;

    if(discriminant > 0)
    {
        *root1 = (-b + sqrt(discriminant))/(2*a);
        *root2 = (-b - sqrt(discriminant))/(2*a);
    }
    else if(discriminant == 0)
    {
        *root1 = *root2 = -b/(2*a);
    }
    else
    {
        printf("Error: Roots are imaginary!");
        *root1 = *root2 = 0;
    }
}

