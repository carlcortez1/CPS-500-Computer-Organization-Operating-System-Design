/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

// Return 1 if they are isomorphic.
// Return 0 if they are not isomorphic.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//struct of tree
struct Node 
    {
        int value;
        struct Node* left;
        struct Node* right;
    };
    
/*void printList(struct Node* k)
{
    while (k != NULL) {//while the head is not null, print it, and sets the next node as the one to be displayed
        printf(" %d ", k->value);
        k == k->value;
    }
}*/
    
struct Node *create(int n) 
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->value = n;
    new->left = NULL;
    new->right=NULL;
    
    return new;
}

//function to call and check
int BSTree(struct Node *root, int max, int min)
{
    if(root == NULL) // empty root
        return 1;
        
    if(root->value < min ||root->value > max)
    return 0;
    
    return
    BSTree(root->left,root->value,min ) &&
    
    BSTree(root->right, max, root->value);
        
}

void inorderTraversal(struct Node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->value);
  inorderTraversal(root->right);
}

int main()
{
    
struct Node *tree1_root = NULL;
tree1_root = create(10); // root
//left and right of root
tree1_root->left = create(5); 
tree1_root->right = create(15);

tree1_root->left->left = create(3);
tree1_root->left->right = create(7);
int max = 16;
int min = 2;
inorderTraversal(tree1_root);


if(BSTree(tree1_root,max,min)==1)
{
    printf("Yep! It's a Binary Search Tree.\n");
}

else
{
    printf("Nope! Not a BST\n");
}



  
    
}



