#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void main()
{
    struct Node *head, *mover, *temp, *prev;
    int n, f, k; // k is the element to be deleted
    int c;        // this value is used only if k != 1

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Initialize head
    head = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the first data: ");
    scanf("%d", &(head->data));
    head->next = NULL;

    // Initialize mover
    mover = head;

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
        mover = temp; // Advance mover to the newly added node
    }

    // Delete the element of the linked list
    if (head == NULL)
        printf("The linked list is empty ");
    else {
        printf("Enter the node to be deleted: ");
        scanf("%d", &k);

        if (k == 1) // If you want to delete the first node of the linked list
        {
            temp = head;
            head = head->next;
            free(temp);
            printf("The new head is %d ", head->data);
        } else {
            c = 1;
            temp = head->next;
            prev = head;
            while (temp != NULL) {
                c++;
                if (c == k) {
                    prev->next = temp->next;
                    free(temp);
                    break; // exit the loop after deletion
                }
                prev = temp;
                temp = temp->next;
            }
        }
    }

    // Print the linked list after deletion
    printf("Linked List after deletion: ");
    mover = head;
    while (mover != NULL) {
        printf("%d -> ", mover->data);
        mover = mover->next;
    }
    printf("NULL\n");

    // Free allocated memory for nodes
    mover = head;
    while (mover != NULL) {
        temp = mover;
        mover = mover->next;
        free(temp);
    }

    
}
