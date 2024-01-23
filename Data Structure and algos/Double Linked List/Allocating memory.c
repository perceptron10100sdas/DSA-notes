#include <stdio.h>
#include <stdlib.h>

// Define a structure for a doubly linked list node
struct Node
{
    int data;
    struct Node* next;
    struct Node* back;
};

void main()
{
    // Declare pointers for the head, current position (mover), and a temporary node
    struct Node *head, *mover, *temp;
    int n, f;

    // Get the number of nodes from the user
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Allocate memory for the head node and initialize the mover pointer
    head = (struct Node*)malloc(sizeof(struct Node));
    mover = head;

    // Get data for the first node from the user
    printf("Enter the data for the first node: ");
    scanf("%d", &(head->data));
    head->back = NULL; // Set the back pointer of the head node to NULL

    // Loop to create and link the remaining nodes
    for (f = 1; f < n; f++) {
        // Allocate memory for a new node
        temp = (struct Node*)malloc(sizeof(struct Node));

        // Get data for the current node from the user
        printf("Enter data for node %d: ", f + 1);
        scanf("%d", &(temp->data));

        // Initialize the next and back pointers of the new node
        temp->next = NULL;
        temp->back = mover;

        // Link the new node to the current node
        mover->next = temp;
        mover = temp; // Move the mover pointer to the new node
    }

    // Print the data of all nodes
    mover = head;
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
