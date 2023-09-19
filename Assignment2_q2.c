/******************************************************************************
// used onlinegdb.com 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int q2(int x, int y);
int main()

{
    int x = 0;
    int y = 0;
    
    printf("please enter your base\n"); //creates x
    scanf("%d", &x);
    
    printf("please enter your exponent\n"); //creates y
    scanf("%d", &y);
    
    int new = q2(x,y);
    printf("%d is your value\n", new);
}

int q2(int x, int y){
    int power = 0;
    int new = 1;
    while(x > 0, y > power)
    {
        new = new * x;
        power++;
    }
    return new;
}
    
    



