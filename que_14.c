// write a program to check whether a number is divisible by 97 or not 

#include<stdio.h>

int main () {
    // a number is divisible by some number when the remainder is zero
    // we can find the remainder by using % 
    int num;
    printf("Enter the value of number you want to check is divisible by 97 : ");
    scanf("%d",&num);
    int ans = num%97;
    printf("The number is only divisble when the remainder is zero, and in our case the remainder is %d",ans);
    return 0;
}