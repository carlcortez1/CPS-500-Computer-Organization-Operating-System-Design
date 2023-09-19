// used onlinegdb.com 

#include <stdio.h>

int q1(int x, int y);
int main()

{
    
    int x = 0;
    int y = 0;
    printf("please enter your base"); //creates x
    scanf("%d", &x);
    
    printf("please enter your exponent"); //creates y
    scanf("%d", &y);
    
    int answer = q1(x,y);
    printf("%d\n", answer);


}

int q1(int x, int y) {
    int power = 0;
    int answer = 1;
    for(x >= 0; y > power ; answer = answer * x){
    ++power;
    } return answer;
}
    
    











