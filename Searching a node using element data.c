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
    int n, f, e; // e is the element to be searched
    int c;        // counter value 

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Initialize head
    head = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the first data: ");
    scanf("%d", &(head->data));
    head->next = NULL;

   mover=head;

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
    printf("enter the element value to be found ");
    scanf("%d",&e);
    
    //Searching an element using the element data
    mover=head ;
  
for(c=1;c<=n;c++)
{
    if(mover->data==e)
    {
        printf("the searched value is %d",mover->data);
        printf("Its position is %d",c);
        break;
    }
    mover=mover->next;


}
 // Free allocated memory for nodes
    temp = head;
    while (temp != NULL)
    {
        mover = temp;
        temp = temp->next;
        free(mover);
    }

    
    
    
    
    
    
    
    
    
    
    }


