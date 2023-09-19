/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int size;
int* createArray(int size);
int main()
{
   
    printf("please enter the size \n");
    scanf("%d", &size);

    
    int* xp = createArray(size);
    for(int i=0; i<size; i++)
    printf("%d ", xp[i]);
    putchar('\n');

}

int* createArray(int size){
    int *xp = (int*)malloc(size * sizeof(int));
    for(int i=0; i < size; i++){
            xp[i]=i*i;
            
    }
    return xp;
    }





