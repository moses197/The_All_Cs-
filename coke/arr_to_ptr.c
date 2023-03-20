#include <stdio.h>

int main(void)
{
    int a[] = {11, 22, 33, 44, 55};

    int *p = a; // p points to the first element of a, 11

    // Print all elements of the array a variety of ways:

    for (int i = 0; i < 5; i++)
        printf("%d\n", a[i]);// Array notation with a

    for (int i = 0; i < 5; i++)
        printf("%d\n", p[i]);// Array notation with p
    
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(a + i));// Pointer notation with a
    
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p + i));// Pointer notation with p
    
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p++)); //printf("%d\n", *(a++));// Moving pointer p
                                // Moving array variable a--ERROR!

}