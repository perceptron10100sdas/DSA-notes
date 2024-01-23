#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void main()
{
    struct Node *head, *mover, *temp, *new;
    int n, f, k; // k is the element to be deleted
    int c = 0;    // initialize c to 0
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Initialize head
    head = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the first data: ");
    scanf("%d", &(head->data));
    head->next = NULL;

    // Initialize mover to head
    mover = head;

    for (f = 1; f < n; f++)
    {
        // Allocate memory for a new node
        temp = (struct Node *)malloc(sizeof(struct Node));

        // Input data for the current node
        printf("Enter data for node %d: ", f + 1);
        scanf("%d", &(temp->data));

        // Set the next pointer of the new node
        temp->next = NULL;

        // Update mover to point to the new node
        mover->next = temp;
        mover = temp;
    }

    // Insert a new element into the linked list
    printf("Enter the position to insert a new element: ");
    scanf("%d", &k);

    if (k == 1)
    {
        // Insert at the beginning
        printf("Enter the element you want to insert: ");
        new = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &(new->data));
        new->next = head;
        head = new;
    }
    else
    {
        // Insert at position k
        c = 1;
        temp = head;

        // Move to the node before the position k
        while (c < k - 1 && temp != NULL)
        {
            temp = temp->next;
            c++;
        }

        if (temp != NULL)
        {
            // Insert new node after the node at position k-1
            printf("Enter new node value: ");
            new = (struct Node *)malloc(sizeof(struct Node));
            scanf("%d", &(new->data));
            new->next = temp->next;
            temp->next = new;
        }
        else
        {
            printf("Invalid position\n");
        }
    }

    // Print the linked list
    printf("Linked List after insertion:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Free allocated memory for nodes
    temp = head;
    while (temp != NULL)
    {
        mover = temp;
        temp = temp->next;
        free(mover);
    }

    
}
