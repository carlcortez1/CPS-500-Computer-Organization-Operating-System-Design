#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


struct Node* front = NULL;
struct Node* rear= NULL;



void insert(int n){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data =n;
    temp->next = NULL;
    if(front == NULL && rear == NULL){ // if nothing in list, front=rear
        front = rear = temp;
        return;
    }
    rear->next = temp; //simply modifies the rear; not front.
    rear = temp;
}

void delete(){
    struct Node* temp = front; // gotta be something there or can't delete
    if (front == NULL){
        printf("underflow\n");
    }
    if(front==rear) //if only one element, it's null for the front and rear.
    {
        front = rear = NULL;
    }
    else{
        front = front->next;
    }
    free(temp);
}

void printList(struct Node* top)
{
    while (top != NULL) {//while the head is not null, print it, and sets the next node as the one to be displayed
        printf(" %d ", top->data);
        top = top->next;
    }
}

//q3
struct Node* top;


void push(int n)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = n;
    temp->next = top;
    top=temp;
}

struct Node* popq3(struct Node *top);
int number,n;


int main()
{
    
    
    do{
   
   printf("\n\nQ3! Type the number below with which operation you'd like to perform.\n");
    printf("1. Pop\n");
    printf("2. Push\n");
    printf("3. Show the current list\n");
    printf("4. Exit\n");
    scanf("%d",&number);
    
    switch(number){
        case 1: // popping
       top=popq3(top);
       printf("Here is the current list:\n");
       printList(top);
            break;
        case 2:
            printf("What number are you pushing for?\n");
            scanf("%d",&n);
            push(n);
            printList(top);
            break;
        case 3: // good here
            printList(top);
            break;
            
    }
}while(number!=4);

//q4    
    int number,n;
     do{
   printf("\n\nQ4! Type the number below with which operation you'd like to perform.\n");
    printf("1. delete\n");
    printf("2. insert\n");
    printf("3. Show the current queue\n");
    printf("4. Exit\n");
    scanf("%d",&number);
    
    switch(number){
        case 1: // popping
       delete();
       printf("Here is the current list:\n");
       printList(front);
            break;
        case 2:
            printf("What number are you pushing for?\n");
            scanf("%d",&n);
            insert(n);
            printf("Here is the current list:\n");
            printList(front);
            break;
        case 3: // good here
            printList(front);
            break;
            
    }
}while(number!=4);
}
struct Node* popq3(struct Node *top)
{
     if (top == NULL){
            printf("Underflow!\n");
        }
    else
    {
        struct Node *temp = top;
        top = top->next;
        printf("\n say bye to %d",temp->data);
        free(temp);
    }
    return top;
}