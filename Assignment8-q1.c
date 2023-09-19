/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

You are given a binary tree.  Write a function to see if the tree is a binary search tree. 
You may write an iterative or recursive solution. 
In the case of a recursive solution, you can write a helper function called by the function below. 
Recall that the following tree is NOT a binary search tree:
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Node 
    {
        int value;
        struct Node* left;
        struct Node* right;
    };

struct Node *create(int n) 
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->value = n;
    new->left = NULL;
    new->right=NULL;
    
    return new;
}
void inorderTraversal(struct Node* root) 
{
  
  if (root == NULL) 
  return;
  inorderTraversal(root->left);
  printf("%d ->", root->value);
  inorderTraversal(root->right);
}

int compare(struct Node* root, struct Node* root2)
{
    if(root== NULL && root2 == NULL)
    { //empty roots
    return 1;
    
    }
    
    else if
    (root == NULL || root2 == NULL){
        return 0;
        
    }
    
    else
    {
        compare(root->left, root2->left) && compare(root2->right,root->right);
    }
    
}

//if recursion, 5lines of code.
//if,else if, then else with one line of code for each.

int main()
{
    //Tree 1 created
struct Node *tree1_root = NULL;
tree1_root = create(3); // root
//left and right of root
tree1_root->left = create(1); 
tree1_root->right = create(7);
//right of the right
tree1_root->right->left = create(5);
tree1_root->right->right = create(9);

inorderTraversal(tree1_root);
printf("\n");

    //Tree 2 created. Same layout as tree 1 with different numbers
struct Node *tree2_root = NULL;
tree2_root = create(3); // root
//left and right of root
tree2_root->left = create(2); 
tree2_root->right = create(8);
//right of the right
tree2_root->right->left = create(4);
tree2_root->right->right = create(10);

inorderTraversal(tree2_root);
printf("\n");

//tree 3 created. Different than the other two.

struct Node *tree3_root = NULL;
tree3_root = create(3); // root
//left and right of root
tree3_root->left = create(2); 
tree3_root->right = create(8);
//right of the right
tree3_root->left->left = create(1);
tree3_root->right->right = create(10);

inorderTraversal(tree3_root);
printf("\n");

if(compare(tree1_root, tree2_root)==1){
    printf("We're isomorphic!\n");
}
else{
    printf("We're NOT isomorphic!\n");
}
//compare(tree2_root, tree3_root);
//compare(tree1_root, tree3_root);

if(compare(tree2_root, tree3_root)==1){
    printf("We're isomorphic!\n");
}

else{
    printf("We're NOT isomorphic!\n");
}
    if(compare(tree1_root, tree3_root)==1){
    printf("We're isomorphic!\n");
}

else{
    printf("We're NOT isomorphic!\n");
}

}



