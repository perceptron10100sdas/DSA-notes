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

    // insert the element of the linked list
    mover=(struct Node*)realloc((n+1),sizeof(struct Node));
    if(k==1)
    {
        printf("enter the element u want to insert");
        scanf("%d",&(temp->data));
        temp->next=head;

    }
    else{
        c=1;temp->next=head;
        while(temp->next==NULL)
        {
            c++;
            if(c==k)
            {
                printf("enter new node value");
                scanf("%d",&(new->data));
                temp->next=new;
                new->next=temp->next->next;
                
            }


        }
    }
   

 

    // Free allocated memory for nodes
    mover = head;
    while (mover != NULL) {
        temp = mover;
        mover = mover->next;
        free(temp);
    }

    
}
