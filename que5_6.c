// program to calculate the volume of a cylinder given its radius and height 

// volume of cylinder is pi*r^2*h

#include<stdio.h>

int main(){
    float radius;
    printf("Enter the value of radius = ");
    scanf("%f",&radius);
    float height;
    printf("Enter the value of height = ");
    scanf("%f",&height);
    float pi = 3.1415;
    float volume_of_cylinder = (pi * (radius * radius) * height);
    printf("Volume of cylider is = %f",volume_of_cylinder);
    return 0;
}