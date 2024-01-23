#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void main()
{
    struct Node *head, *mover, *temp, *new;
    int n, f, k; // k is the element to be deleted
    int c;        // this value is used only if k != 1

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Initialize head
    head = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the first data: ");
    scanf("%d", &(head->data));
    head->next = NULL;

   mover->next=head;

    for (f = 1; f < n; f++) {
        // Allocate memory for a new node
        temp = (struct Node*)malloc(sizeof(struct Node));

        // Input data for the current node
        printf("Enter data for node %d: ", f + 1);
        scanf("%d", &(temp->data));

        // Set the next pointer of the new node
        temp->next = NULL;

        // Update mover to point to the new node
        mover->next = temp;
        mover=temp;
    }
    
    //Searching an element using the element number 
    
    
    
    
    
    
    
    
    
    
    }


