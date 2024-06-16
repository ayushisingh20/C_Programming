// used for easily using conditional statements 

#include<stdio.h>
int main() {
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    // one liner 
    (a<=5)? printf("Value of a is less than equal 5")  : printf("value of a is greator than 5"); 
    // (condition) ? first true statement : false statement in end
    return 0;
}