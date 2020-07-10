# include <string.h>
# include <stdlib.h>
# include <stdio.h>

struct node
{
    int data;
    struct node *next;
}*q;

void createNewNode(int n)
{
    struct node *newnode, *temp;          // temp is the first node in the linked list
                                        // newnode is the second node of the link

    int num,i;
    q = (struct node*)malloc(sizeof(struct node));       // q is the struct variable jisko apan dynamic size de rahe hai

     printf("\n Node 1: ");
     scanf("%d", &num);
     q->data = num;                                              
     q->next = NULL;                         // links the address field to NULL
     temp = q;                   // pahile node ko next node se link karega ye

     for(i=2;i<=n;i++)
     {
         newnode = (struct node*)malloc(sizeof(struct node));
         printf("\n Node %d: ",i);
         scanf("%d", &num);

         newnode->data = num;
         newnode->next = NULL;

         temp->next = newnode;            // linking the newnode to another node
         temp = temp->next;

     }

}

void display()
{
    struct node *temp;
    temp = q;                  // structure ka ek aur variable create karke use q is link kar dia
    while (temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }

   /* int pos;
    printf("\n\n Position to be deleted: ");
    scanf("%d",&pos);

    deleteNode(q,pos);
    */
}

void deleteNode(struct node *ref, int x)                  // apan ne q paas kia tha so use store karne ke liye struct ka naya variable ref banaya
{
    struct node *c = ref;          // c is new variable jisme ref ko store kia
    if(x == 0)
    {
        ref = c->next;
        free(c);
        return;
    }

    // traverse the list till we reach our desired postion

    for (int i = 0; c!=NULL && i < x-1; i++)
    {
       c = c->next; 
    }

     struct node *next = c->next->next; 
  
    // Unlink the node from linked list 

    free(c->next);                           // Free memory 
  
    c->next = next;
    
}


void insertNodeAtMiddle(int ele, int position)
{
    int i;
    struct node *newnode, *temp;

    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newnode->data = ele; // Link data part
        newnode->next = NULL;

        temp = q;

        /* 
         * Traverse to the n-1 position 
         */
        for(i=2; i<=position-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            /* Link address part of new node */
            newnode->next = temp->next; 

            /* Link address part of n-1 node */
            temp->next = newnode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}






int main()
{
    int n,ele;

    printf("\n\n Size: ");
    scanf("%d",&n);
    createNewNode(n);
    printf("\n Data entered: \n");
    display();
    int pos;
    printf("\n\n Position to be deleted: ");
    scanf("%d",&pos);

    deleteNode(q,pos);
    display();
    printf("\n\n");

    int position;

    printf("\nEnter data to be inserted: ");
    scanf("%d", &ele);
    printf("\nEnter the position to insert new node: " );
    scanf("%d", &position);
    insertNodeAtMiddle(ele, position);

    printf("\nData in the list \n");
    display();
    printf("\n\n");
}