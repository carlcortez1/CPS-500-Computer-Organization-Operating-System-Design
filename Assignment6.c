/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int permutation(int S[20],int countS,int start,int i);
int answer(int num,int num2);

void move(char* a,char* b){ //used in a previous lab moving terms around
        char t;
        t = *a;
        *a = *b;
        *b = t;
    }    

void permutate(char *strin,int i,int len)
    {
        int j; //so it exists in the for
        //finished the permutations from first letter
        if(i==len){
            printf("%s ",strin);
        }
        else{
            for(j=i;j<=len;j++){
                move((strin+i),(strin+j));
                permutate(strin,i+1,len);
                move((strin+i),(strin+j)); //switch again before changing first letter
                
            }
        }
    }
    
int main()
{
    //q1
    int countS, S[20];
    
    printf("Q1: Please enter how many elements are in the array.");
    scanf("%d",&countS);
    
    for(int i=0; i<countS; i++){
        printf("\n S[%d]= ",i);
        scanf("%d",&S[i]);
    }
 
    permutation(S,countS,1,0);
    printf("answer: {");
    for(int i=0;i<countS;i++)
    {
        printf("%d ",S[i]);
    }
    printf("}\n\n");
    
    
    
    
    
    //q2
    int number,exponent,ans;

    
      printf("Q2: type a base: ");
    scanf("%d",&number);
    
    printf("type an exponent too: ");
    scanf("%d",&exponent);
    

ans = answer(number,exponent);
    printf("\nanswer:%d\n", ans);
    
    
    
    char strin[]="howdy";
    
    printf("Q3: please enter a string: ");
    scanf("%s",&strin);

int len=strlen(strin);
    
    //printf("The string is %s\n",strin);
    
    printf("The variations are as follows:\n");
    permutate(strin,0,len-1);
    
    
    

    return 0;
}
//q1
int permutation(int S[20],int countS,int start,int i)
{
if(i==countS){
    return 1; //placeholder to keep something in the spot
}

int temp = S[i]; //holds original value

int r = permutation(S,countS,start*S[i],i+1);

S[i]=start*r;

return temp*r;
}
 
 //q2
int answer(int num,int num2)
{
   int based=0;
   if(num2==0){
       return 1;
   }
       based=answer(num,num2-1)*num;
       
    return based;
}

    
    int recursion3();



