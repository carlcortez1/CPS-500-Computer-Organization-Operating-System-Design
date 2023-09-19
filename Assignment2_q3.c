/******************************************************************************
// used onlinegdb.com 
Question 3

*******************************************************************************/
#include <stdio.h>
int q3(int n);
int main()
{
    int n = 0;
    printf("Enter a number\n");
    scanf("%i",&n);

    if(n % 2 == 0){
        printf("This is even!\n");
    }
    if(n % 2 == 1){
        printf("This is odd!\n");
    }
    if(n % 5 == 0){
        printf("This number is a multiple of 5! ");
    }    
}        
        

