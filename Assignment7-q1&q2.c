/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

Question 1) Write a function that removes every other node (starting with the second node) from a list.

Example:
Input: head -> a -> b"p1"-> c-> d-"p3"> e-> f"p5"-> g -/
Output: head -> a-> c-> e-> g-/

//Check if this one is OK during office hours.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
 
void printList(struct Node* n)
{
    while (n != NULL) {//while the head is not null, print it, and sets the next node as the one to be displayed
        printf(" %d ", n->data);
        n = n->next;
    }
}
 
void deleteeveryother (struct Node* n)
{
   
  struct Node* ptr;
  struct Node* tmp;
  ptr = n;
  
    while (ptr != NULL && ptr->next != NULL) 
    {
    printf(" %d ", ptr->data);
    
    tmp = ptr->next;
    ptr->next = tmp->next;
    free(tmp);
    
    
    ptr = ptr->next;
    //tmp
    }

}

//q2
int max = 20;
int array[20];
int top = -1;
int top1;
int n;
int number;
    void push(int array[], int n)
{
    if(top == max - 1){
        printf("Overflow because the top is : %d",top);
    }
    else
    {
        top++;
        array[top]=n;
    }
}

   int pop(int array[])
{
    int val;
    if(top == -1){
        printf("Underflow");
        return -1;
    }
    else
    {
        val = array[top];
        top--;
        return val;
    }
}


 
 
 
int main()
{
    struct Node* head = NULL;
    struct Node* p1 = NULL;
    struct Node* p2 = NULL;
    struct Node* p3 = NULL;
    struct Node* p4 = NULL;
    struct Node* p5 = NULL;
    struct Node* tail = NULL;
    struct Node* tmp = NULL;
    
    /*void addnode(char ch) {
    if(head==NULL){
        struct Node *New=(struct node *) malloc (sizeof(struct Node));
        head = New;
        New->ch=ch;
        New->next=NULL;
    }    */
        
    
    head = (struct Node*)malloc(sizeof(struct Node));
    p1 = (struct Node*)malloc(sizeof(struct Node));
    p2 = (struct Node*)malloc(sizeof(struct Node));
    p3 = (struct Node*)malloc(sizeof(struct Node));
    p4 = (struct Node*)malloc(sizeof(struct Node));
    p5 = (struct Node*)malloc(sizeof(struct Node));
    tail = (struct Node*)malloc(sizeof(struct Node));
    tmp = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1; // assign data in first node
    head->next = p1; // Link first node with
    // the second node
    
    p1->data = 2;
    p1->next = p2; 
    
     p2->data = 3; 
    p2->next = p3;
    
    p3->data = 4; 
    p3->next = p4; 
    
    p4->data = 5; 
    p4->next = p5; 
    
     p5->data = 6; 
    p5->next = tail;
  
    tail->data = 7; 
    tail->next = NULL;

   printf("q1:the original input was: ");
   printList(head);
   
   printf("\nNow, the output is: ");
   deleteeveryother(head);
   
    int val;
    //gets a hold of # of elements
    printf("\n\nQ2:How many elements are in your array?");
    scanf("%d",&top1);
    top=top1-1;
    
    //user feeds elements in the array
    for(int i = 0; i<=top;i++){
        printf("s[%d]= ", i);
        scanf("%d",&array[i]);
    }
    
    //prompt
   do{ 
    printf("\n\nQ2 continued! Type the number below with which operation you'd like to perform.\n the top is currently at %d \n",top);
    printf("1. Pop\n");
    printf("2. Push\n");
    printf("3. Show the current array\n");
    printf("4. QUIT\n");
    scanf("%d",&number);
    
    
    switch(number){
        case 1:
            val=pop(array);
            break;
        case 2:
            printf("What number are you pushing for? Remember that the top is at %d currently\n", top);
            scanf("%d",&n);
            push(array, n);
            break;
        case 3:
            for(int i = 0; i<=top;i++){
            printf("%d ", array[i]);
            }
            break;
            
    }
   }while(number!=4);
   
   
   
   
   
  
}




