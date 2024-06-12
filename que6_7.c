// program to convert celcius to farenheit 
// F = (9/5)C + 32.

#include<stdio.h>

int main() {
    int temp_in_c;
    printf("Enter the value of temperature in celcius");
    scanf("%d",&temp_in_c);
    float temp_in_f = (((9.0/5.0) * temp_in_c) +32 );
    printf("Temp in farenheit is %f",temp_in_f);
    return 0;
}


// Floating-point division: Changed 9/5 to 9.0/5.0 to ensure the division is performed as floating-point.