#include <stdio.h>
#include <stdlib.h>


struct node                                 // creating a structure to store the data and left and right node pointers
{
   int data;
   struct node *left,*right;            // initialising the left and right node pointers
}*root=NULL,*temp;


void insert(int item);
void create(int item);
int search_element(struct node *t,int item,int flag);
void search(struct node *t);
void inorder(struct  node *t);


int main()
{
   int ch,item,choice,flag;
   do
   {
       flag=0;
           printf("\n1. Insert node");                     // generating a menu for user to choose his independant options
                                                    // apan yaha pe do while loop se ye karenge
                                                    // last main choice 1 hoga to continue hoga warna bahar padenge loop ke
           printf("\n2. Search node");
           printf("\n3. Inorder Traversal");
           printf("\nEnter your choice: ");
           scanf("%d",&choice);
           switch(choice)
           {
               case 1: printf("\n Inserting element: ");
                       scanf("%d",&item);                          // scanning the user defined item to be inserted
                       insert(item);
                       break;

               case 2: printf("\n Searching element: ");
                       scanf("%d",&item);                           // scanning the user defined item to be searched
                       flag=search_element(root,item,flag);
                       if(flag==0)
                       {
                            printf("\n\n Element is not present in the tree !");      // flag variable agar 0 hua to nahi hai

                       }
                       else
                       {
                            printf("\n\n Element is present in the tree");
                       }
                       break;

               case 3: printf("\n\n The root element is: %d\n",root->data);
                       inorder(root);                                // ascending order main tree ke elements print karenga ye function
                       break;

               default: printf("\n Error, you have entered the wrong choice !");

           }

           printf("\n Continue??: Yes or No: [1/0]: ");
           scanf("%d",&ch);

   }while(ch==1);
   return 0;
}


void insert(int item)          // function to insert an item to the binary tree
{
  create(item);
  if(root==NULL)
  {
      root=temp;
  }
  else
  {
      search(root);
  }
}


void create(int item)           // function to create a node in the binary search tree
{
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=item;
  temp->left=temp->right=NULL;
}


void search(struct node *t)      
{                   
   if(temp->data<t->data && t->left!=NULL)
   {
         search(t->left);
   }
   else if(temp->data<t->data && t->left==NULL)
   {
         t->left=temp;
   }
   else if(temp->data>t->data && t->right!=NULL)
   {
         search(t->right);
   }
   else if(temp->data>t->data && t->right==NULL)
   {
         t->right=temp;
   }
}


void inorder(struct node *t)
{
   if(root==NULL)
   {
        printf("\nTree is empty !");
        return;
   }
   if(t->left!=NULL)
   {
        inorder(t->left);
   }
   printf("%d ",t->data);
   if(t->right!=NULL)
   {
        inorder(t->right);
   }
}


int search_element(struct node *t,int item, int flag)      // function to search where user entered element belongs to binary tree
{
   if(root==NULL)
   {
        return flag;
   }
   if(item==root->data)
   {
        flag=1;
        return flag;
   }
   if(item<t->data)
   {
        t=t->left;
   }
   else 
   {
        t=t->right;
   }
   while(t!=NULL)
   {
         if(t->data==item)
         {
             flag=1;
             return flag;
         }
         if(item<t->data)
         {
             t=t->left;
         }
         else
         {
             t=t->right;
         }
   }
   return flag;
}

