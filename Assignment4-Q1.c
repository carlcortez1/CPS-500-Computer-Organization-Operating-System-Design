/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void setDifference(int* S, int countS, int* T, int countT, int* R, int* countR);


int main()
{
    int countS,countT, S[20], T[20], countR, R[20],i;
    
    printf("please enter how many elements are in the S set.");
    scanf("%d",&countS);
    
    for(int i=0; i<countS; i++){
        printf("\n S[%d]= ",i);
        scanf("%d",&S[i]);
    }
    
    printf("please enter how many elements are in the T set.");
    scanf("%d",&countT);
    
    
    for(int i=0; i<countT; i++){
        printf("\n T[%d]= ",i);
        scanf("%d",&T[i]);
        
    }
    
    setDifference(S,countS, T, countT, R, &countR);
    
         
}


void setDifference(int* S, int countS, int* T, int countT, int* R, int* countR)
{
int yep=0;
int counter=0;
for(int i=0; i< countS;i++)
    {
    
    for(int j=0;j<countT;j++)
    {
        
        if(S[i]!=T[j])
        {
            yep++;
        }
        
        if(yep==countT && j ==(countT-1))
        {
            R[counter]=S[i];
            counter++;
            yep=0;
        }
        if(j==(countT-1) && yep!= countT){
            yep=0;
        }
        
        }
          
        }
        for(int i=0;i<counter;i++){
         printf("%d ",R[i]); 
         }       

    }

    


        
            
    
    
    
    


