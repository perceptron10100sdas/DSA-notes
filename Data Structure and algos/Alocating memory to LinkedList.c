#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void main()
{
    struct Node *head, *mover, *temp;
    int n, f;
   

    printf("Enter the number of nodes: ");
    scanf("%d", &n);
 mover=(struct Node*)calloc(n,sizeof(struct Node));
     printf("Enter the first data  ");
    scanf("%d", &(head->data));
    // Initialize head to Mover
    mover->next=head ;
   

    for (f = 1; f < n; f++) {
        // Allocate memory for a new node
        temp = (struct Node*)malloc(sizeof(struct Node));

        // Input data for the current node
        printf("Enter data for node %d: ", f + 1);
        scanf("%d", &(temp->data));

        // Set the next pointer of the new node
        temp->next =NULL;

        // Update mover to point to the new node
        mover->next = temp;
        mover=temp;
    }

    // Print the data of all nodes
    printf("Data of all nodes: ");
   
    while (mover != NULL) {
        printf("%d ", mover->data);
        mover = mover->next;
    }

    // Free allocated memory for nodes
    mover = head;
    while (mover != NULL) {
        temp = mover;
        mover = mover->next;
        free(temp);
    }

   
}
