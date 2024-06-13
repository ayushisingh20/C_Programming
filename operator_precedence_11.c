/*
BODMAS mot followed in c programming
priority 1 --> *,/,%
priority 2 --> +,-
priority 3 --> =
( only in absense of parenthesis )
*/

#include<stdio.h>

int main () {
    printf("value of 3*4 - 5*6 is : %d \n",3*4 - 5*6); // follows priority list * then - 
    printf("value of 3*4/5*6 is : %d \n",3*4/5*6);
    printf("value of (3*4)/(5*6) is : %d \n",(3*4)/(5*6));
    // ASSOCIATIVITY LEFT TO RIGHT IN CASE OF TIE IN SAME PRIORITY OPERATORS 
    // X*Y/Z = (X*Y)/Z
    // X/Y*Z = (X/Y)*Z
    printf("value of 3*4/5 --> (3*4)/5 is : %d \n",3*4/5);
    printf("value of 3/4*5 --> (3/4)* 5 is : %d \n",3/4*5);
    return 0;
}


/*
CONTROL INSTRUCTIONS - to determine flow of control in a program 
1. SEQUENCE 
2. DECISION - if/else 
3. LOOP - while loop...
4. CASE - switch case...
*/