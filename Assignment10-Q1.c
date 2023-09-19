/******************************************************************************

Create two hashing functions, each of which accepts a single number and adds it to a hash table with 11 possible entries.  
Both functions should use the hash function of h(x) = x % 11.
Each function should implement one of the following hash techniques:

a) Chaining
b) Linear probing
c) Quadratic probing (c1 = ½, c2 = ½)
d) Double hashing (with h2(x) = 10 - x % 11).

Also create a function to print the hash table in breadth first order.  (Note: When using an array, this simply prints the array from starting at index 0.)

Insert the following numbers into each hash table, then print the results.

Sequence: 17, 23, 100, 50, 61, 9, 12, 15, 6, 4, 33, 27, 51

*******************************************************************************/
#include <stdio.h>
int sequence[13]= { 17, 23, 100, 50, 61, 9, 12, 15, 6, 4, 33, 27, 51};
int table[11];
void insert (int val, int moddy);
int count = 0;


int main()
{
//creating a null table
for(int i=0; i<11; i++){
    table[i]= -1;
}
//sending the sequence into insert.
for(int i=0;i<13;i++){
    insert(sequence[i],0);
}
printf("Here is the hash table from using Linear Probe'n\n");
for(int i=0; i<11; i++){
    printf("%d >> ",table[i]);
}


}

void insert (int val, int moddy){
    int result = (val % 11 + moddy) % 11;
    
    if(count !=11){
        
    
    if(table[result] == -1){
        table[result] = val;
        count++;
    }
    
    else{
        moddy++;
        insert(val,moddy);
    }
    
    }

}
