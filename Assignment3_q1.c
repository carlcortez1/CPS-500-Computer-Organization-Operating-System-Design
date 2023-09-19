/******************************************************************************

ask about this during office hours

*******************************************************************************/
#include <stdio.h>

int secondLargest(int A[], int n);
int main()
{
   int A[]={4,3,600000,1000000,40309,0,-123,1,-3,6,500000};
   int n = 11;
   
    int answer = secondLargest(A,n);
   printf("%d\n", answer);

}

int secondLargest(int A[],int n)
{   
    int small = -112345667;
   int small2 =-1123456680;
   
   
   for(int x = 0; x<n;x++){ 
       if(A[x]> small)
            small = A[x];
   }
   
    for(int x = 0; x<n;x++){
        if(A[x]!=small){
            if(A[x]>small2)
                small2=A[x];
                
        }
       
    }
   return small2;
}


    
            












