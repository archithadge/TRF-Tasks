#include<stdio.h> 
#include<stdlib.h> 

struct node 
{ 
	int key; 
	struct node *left, *right; 
}; 


struct node *newNode(int item)        // a function to create a new bst node 
{ 
	struct node *temp = (struct node *)malloc(sizeof(struct node)); 
	temp->key = item;                   // the key will contain the value which we have given
	temp->left = temp->right = NULL;             // initialising the left and right sides to be NULL
	return temp; 
} 


void postorder(struct node *root)            // function to print the binary tree in inorder way
{ 
	printf("\n");
	if (root != NULL)                    // check whether root is not 0
	{ 
		postorder(root->right); 
		printf("%d \n", root->key); 
		postorder(root->left); 
	} 
} 


struct node* insert(struct node* node, int key) 
{ 
	
	if (node == NULL)                        // If the tree is empty, return a new node 
     return newNode(key); 

	
	if (key < node->key)                             // Otherwise, recur down the tree
		node->left = insert(node->left, key); 
	else if (key > node->key)                          
		node->right = insert(node->right, key); 

	return node; 
} 

int main()
{ 
	struct node *root = NULL; 

	int n,ele[1000];
	printf("\nSize: ");
	scanf("%d",&n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d",&ele[i]);
	}

	root = insert(root,ele[0]);

	for (int i = 1; i < n; i++)
	{
		insert(root,ele[i]);
	}
	
	


	/*root = insert(root, 50);              // main root initialised to be 50
	insert(root, 30); 
	insert(root, 20); 
	insert(root, 40);                  // inserting the elements into the bst
	insert(root, 70); 
	insert(root, 60); 
	insert(root, 80); */

	// print inoder traversal of the BST 
	postorder(root); 

	return 0; 
} 
