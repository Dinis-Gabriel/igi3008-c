#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int order_and_display(int* t1, int size1, int* t2, int size2);

int main() {
    int t1[20], t2[20];
    int size1, size2;

    srand(time(0));

    size1 = 10 + rand() % 10;
    size2 = 10 + rand() % 10;

    t1[0] = rand() % 5;
    for (int i = 1; i < size1; i++) {
        t1[i] = t1[i-1] + rand() % 10;
    }

    t2[0] = rand() % 5;
    for (int i = 1; i < size2; i++) {
        t2[i] = t2[i-1] + rand() % 10;
    }

    printf("Tableau t1 : ");
    for (int i = 0; i < size1; i++) {
        printf("%d%s", t1[i], i == size1 - 1 ? "\n" : ", ");
    }

    printf("Tableau t2 : ");
    for (int i = 0; i < size2; i++) {
        printf("%d%s", t2[i], i == size2 - 1 ? "\n" : ", ");
    }

    printf("\nValeurs ordonnées :\n");
    order_and_display(t1, size1, t2, size2);

    return 0;
}

int order_and_display(int* t1, int size1, int* t2, int size2) {
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if ((t1 + i) <=(t2 + j)) {
            printf("%d, ", (t1 + i));
            i++;
        } else {
            printf("%d, ",(t2 + j));
            j++;
        }
    }

    while (i < size1) {
        printf("%d, ", (t1 + i));
        i++;
    }

    while (j < size2) {
        printf("%d, ",(t2 + j));
        j++;
    }

    printf("\n");
    return 0;
}