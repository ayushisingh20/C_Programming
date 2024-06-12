// create a program to add 2 numbers in c 

#include<stdio.h>
int main () {
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b");
    scanf("%d",&b);
    int add = a+b;
    printf("summation of the 2 numbers is %d",add);
    return 0;
}