#include<stdio.h>
#include <stdlib.h>
#include<string.h>

struct node
{
    int data; 
    struct node *right;
    struct node *left; 
};

struct node* search(struct node *root, int x)
{   
    if(root==NULL || root->data==x)
    {
        return root;
    }    
    else if(x > root->data) 
    {
        return search(root->right, x);
    } 
    else 
    {
        return search(root->left,x);
    }
}

struct node* newNode(int x)
{
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;

    return p;
}

struct node* insert(struct node *root, int x)
{
  
    if(root==NULL)
    {
        return newNode(x);
    }
    else if(x > root->data) 
    {
        root->right = insert(root->right, x);
    }
    else
    {
        root->left = insert(root->left,x);
    } 
    return root;
}


void inorder(struct node *root)
{  
    if(root!=NULL) 
    {
        return;
    }
        inorder(root->left); 
        printf(" %d ", root->data);
        inorder(root->right);
}

void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}


void postorder(struct node *root)
{   
    if(root!=NULL) 
    {
        return;
    }
        postorder(root->left);  
        postorder(root->right); 
        printf(" %d ", root->data); 
}

int main()
{
    struct node *root;
    int arr[100];
    int n;
  
    printf("Enter the number of elements for a tree: \n");
    scanf("%d", &n);

    printf("Enter the elements for a tree : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {   
            root = newNode(arr[i]);
        }
        else
        {
            insert(root, arr[i]);
        }   
    }

    printf("The inorder is : ");
    inorder(root);
    printf("\n");
    
    printf("The preorder is : ");
    preorder(root);
    printf("\n");

    printf("The postorder is : ");
    postorder(root);
    printf("\n");

    int a;
    printf("Enter a number to search in bst : ");
    scanf("%d", &a);

    if (search(root, a)==0)
    {
        printf("The number %d is not present in the given Binary Search Tree.", a);
    }
    else
    {
        printf("The number %d is present in the given Binary Search Tree.", a);
    }
    return 0;
} 