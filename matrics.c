#include <stdio.h>

void find_largest(int *ptr1, int *ptr2, int *ptr3, int *result);

int main()
{
    int num1, num2, num3, largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    find_largest(&num1, &num2, &num3, &largest);

    printf("The largest number is: %d", largest);

    return 0;
}

void find_largest(int *ptr1, int *ptr2, int *ptr3, int *result)
{
    if (*ptr1 > *ptr2 && *ptr1 > *ptr3)
    {
        *result = *ptr1;
    }
    else if (*ptr2 > *ptr1 && *ptr2 > *ptr3)
    {
        *result = *ptr2;
    }
    else
    {
        *result = *ptr3;
    }
}

