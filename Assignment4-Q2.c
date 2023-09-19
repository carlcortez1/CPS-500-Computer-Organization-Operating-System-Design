/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int properSubset(int* s, int counts, int* T, int countT);

int main()
{
    int counts,countT, s[20], T[20];
    
    printf("Please enter how many elements are in the s subset: ");
    scanf("%d",&counts);
    
    for(int i=0; i<counts; i++){
        printf("\n s[%d]= ",i);
        scanf("%d",&s[i]);
    }
    
    printf("Please enter how many elements are in the T set: ");
    scanf("%d",&countT);
    
    
    for(int i=0; i<countT; i++){
        printf("\n T[%d]= ",i);
        scanf("%d",&T[i]);
        }
        
        
properSubset(s,counts,T,countT);
    
}
int properSubset(int* s, int counts, int* T, int countT){    
    
    int yep=0;

    for(int i = 0; i < counts; i++)
    {
        
        for(int j = 0; j < countT; j++)
        {
            if(s[i]==T[j])
            {
                yep++;
               
            }
            
        }
        
    }
    
    if(yep==counts){
    printf("\n1");}
    else{ printf("\n0");}
    
}



    

