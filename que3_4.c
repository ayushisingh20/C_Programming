// write a c program to calculate area of a reactange taking input from the user 

#include<stdio.h>
int main(){
    int length; // length of rectange 
    printf("Enter the value of length = ");
    scanf("%d",&length);
    int breadth; // breadth of rectange 
    printf("Enter the value of breadth = ");
    scanf("%d",&breadth);
    int area_of_rectangle = length * breadth;
    printf("area of rectangle with Length %d and Breadth %d, is %d",length,breadth,area_of_rectangle);
    return 0; 
}