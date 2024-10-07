#include <stdio.h>

int main()
{
    int b = 4;
    int* a = &b;

    printf("b  = %d\n", b);   // valeur de b
    printf("&b = %p\n", &b);  // adresse de b
    printf("a  = %p\n", a);   // valeur de a
    printf("*a = %d\n", *a);  // valeur pointée par a
    printf("&a = %p\n", &a);  // adresse de a

    return 0;
}