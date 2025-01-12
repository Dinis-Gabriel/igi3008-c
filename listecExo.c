#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;


int getRandomInteger(int rmin, int rmax)
{
    int ran=rand()%(rmax-rmin);
    int res=ran+rmin;
    return res;

}


int listLength(Node* head)
{
    int i =0;
    Node* current=head;
    while(current !=NULL)
    {
        i++;
        current=current->next;
    }
    return i;
}
void printList(Node* head)
{
    while
}





    int main()
    {

        Node* head;

        int data;
        int nnodes;

        // Build list with insertNodeAtFirst()

        nnodes = 10;
        head = NULL;
        printf("STARTING with an empty list\n");
        for (int n = 0; n < nnodes; n++)
        {
            data = getRandomInteger(1, 50);
            printf("... inserting %3d at first\n", data);
            head = insertNodeAtFirst(head, data);
        }
        printf("DONE\n");
        printList(head);
        printf("length = %d\n", listLength(head));
        fprintf(stderr, "***\n");

        return 0;
    }