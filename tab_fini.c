#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mini(int t[], int size);
int imini(int t[], int size);
int maxi(int t[], int size);
int imaxi(int t[], int size);
int somme(int t[], int size);
double moyenne(int t[], int size);
int compte(int t[], int size, int lowest, int highest);
int est_trie(int t[], int size);

int main() {
    int t[100];
    int size = 10;

    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        t[i] = rand() % 50;
        printf("%d\n", t[i]);
    }

    printf("minimum : %d\n", mini(t, size));
    printf("indice du minimum : %d\n", imini(t, size));
    printf("maximum : %d\n", maxi(t, size));
    printf("indice du maximum : %d\n", imaxi(t, size));
    printf("somme : %d\n", somme(t, size));
    printf("moyenne : %.6f\n", moyenne(t, size));
    printf("%d valeurs de t comprises entre 10 et 40\n", compte(t, size, 10, 40));
    printf("est trié ? %d\n", est_trie(t, size));

    return 0;
}


int mini(int t[], int size) {
    int min = t[0];
    for (int i = 1; i < size; i++) {
        if (t[i] < min) {
            min = t[i];
        }
    }
    return min;
}

int imini(int t[], int size) {
    int min_index = 0;
    for (int i = 1; i < size; i++) {
        if (t[i] < t[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

int maxi(int t[], int size) {
    int max = t[0];
    for (int i = 1; i < size; i++) {
        if (t[i] > max) {
            max = t[i];
        }
    }
    return max;
}

int imaxi(int t[], int size) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (t[i] > t[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

int somme(int t[], int size) {
    long int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += t[i];
    }
    return sum;
}

double moyenne(int t[], int size) {
    return (double)somme(t, size) / size;
}

int compte(int t[], int size, int lowest, int highest) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (t[i] >= lowest && t[i] <= highest) {
            count++;
        }
    }
    return count;
}

int est_trie(int t[], int size) {
    int croissant = 1;
    int decroissant = 1;

    for (int i = 1; i < size; i++) {
        if (t[i] > t[i-1]) {
            decroissant = 0;
        } else if (t[i] < t[i-1]) {
            croissant = 0;
        }
    }

    if (croissant) return 1;
    if (decroissant) return -1;
    return 0;
}