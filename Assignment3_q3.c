/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int a,b,c,d;
struct Point{
    int x,y;    
    };
    
double distance(struct Point* p1, struct Point* p2);
int main()
{
    struct Point p1,p2;
    
    printf("give the x and y coordinates for one point: ");
    scanf("%d""%d",&p1.x,&p1.y);

    printf("give the x and y coordinates for a second point: ");
    scanf("%d""%d",&p2.x,&p2.y);
    
    double answer = distance(&p1,&p2);
    printf("%f",answer);

    

   // printf("x and y coordinates for the first point: %p", p1.x );
    //printf("x and y coordinates for a second point: %d %d", p2.x, p2.y);

}
double distance(struct Point* p1, struct Point* p2){
    a=p1->x;
    b=p1->y;
    c=p2->x;
    d=p2->y;
    
   double blue = sqrt(((c-a)*(c-a))+((d-b)*(d-b)));
        return blue;

}





