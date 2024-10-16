#include <stdio.h>

const int SIZE = 5;

int main()
{

    char *simpsons[] = {
        "Homer",
        "Marge",
        "Bart",
        "Lisa",
        "Maggie"};

    char *p;

    for (int i = 0; i < SIZE; i++)
    {
        p = simpsons[i];

        while (*p != '\0')
        {
            printf("%c", *p);
            p++;
        }

        printf("\n");
    }
}