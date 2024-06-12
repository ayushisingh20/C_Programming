// calcalute area of a cicle 

#include<stdio.h>

int main(){
    float radius_of_c;
    printf("Enter the value of radious of circle = ");
    scanf("%f",&radius_of_c);
    float pi = 3.1415;
    float area_of_c = pi * (radius_of_c * radius_of_c);
    printf("Area of the given cicle with Radius %f is %f",radius_of_c,area_of_c);
    return 0;
}