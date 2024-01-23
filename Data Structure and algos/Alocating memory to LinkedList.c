#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *mover, *temp;
    int n, f;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Allocate memory for head
    head = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the first data: ");
    scanf("%d", &(head->data));
    head->next = NULL;

    // Initialize mover to head
    mover = head;

    for (f = 1; f < n; f++)
    {
        // Allocate memory for a new node
        temp = (struct Node *)malloc(sizeof(struct Node));
        if (temp == NULL)
        {
            printf("Memory allocation failed\n");

            // Free allocated memory before exiting
            mover = head;
            while (mover != NULL)
            {
                temp = mover;
                mover = mover->next;
                free(temp);
            }
            return 1;
        }

        // Input data for the current node
        printf("Enter data for node %d: ", f + 1);
        scanf("%d", &(temp->data));

        // Set the next pointer of the new node
        temp->next = NULL;

        // Update mover to point to the new node
        mover->next = temp;
        mover = temp;
    }

    // Print the data of all nodes
    printf("Data of all nodes: ");
    mover = head;
    while (mover != NULL)
    {
        printf("%d ", mover->data);
        mover = mover->next;
    }

    // Free allocated memory for nodes
    mover = head;
    while (mover != NULL)
    {
        temp = mover;
        mover = mover->next;
        free(temp);
    }

    return 0;
}
