// malloc1.c

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6400000000

int main()
{
    int *ptr;

    ptr = malloc(SIZE * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed, exiting...\n");
        exit(-1);
    }

    printf("Memory allocation succeed, continuing...\n");

    // Initialisation
    for (int i = 0; i < SIZE; i++)
        *(ptr + i) = rand() % 100;

    // Display
    for (int i = 0; i < SIZE; i++)
        printf("%p : %d\n", ptr+i, *(ptr+i));

    return 0;
}