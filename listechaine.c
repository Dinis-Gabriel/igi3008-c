#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

int main()
{
Node *head = NULL;
head = malloc(sizeof(Node));
head->data = 1;
printf("%p head   : (%d, %p)\n", head, head->data, head->next);

Node *first = NULL;
first = malloc(sizeof(Node));
first->data = 3;
head->next = first;
printf("%p first   : (%d, %p)\n", first, first->data, first->next);

Node *second =NULL;
second =malloc(sizeof(Node));
second->data = 2;
first->next=second;
second->next=NULL;
printf("%p head   : (%d, %p)\n", head, head->data, head->next);
printf("%p first   : (%d, %p)\n", first, first->data, first->next);
printf("%p second  : (%d,%p)\n", head , second->data, second->next );

    return 0;
}