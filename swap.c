// swap1.c

#include <stdio.h>

void swap1(int x, int y)
{
    int tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 1;
    int b = 2;

    printf("AVANT : a = %d, b = %d\n", a, b);
    swap1(a, b);
    printf("APRES : a = %d, b = %d\n", a, b);
    return 0;
}
