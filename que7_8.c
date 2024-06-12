// write a program to calculate simple interest for a set of values representing principal, no. of years and rate of interest. 

// S.I. = (P × R × T)/100, 
// where P = Principal, R = Rate of Interest in % per annum, and T = Time, usually calculated as the number of years.

// Principal amount = 1000 Rate of interest = 5 Time period = 2

#include<stdio.h>

int main() {
    int principal;
    printf("Enter value of princial = ");
    scanf("%d",&principal);
    int rate_of_interest;
    printf("Enter value of rate_of_interest = ");
    scanf("%d",&rate_of_interest);
    int time_period;
    printf("Enter value of time_period = ");
    scanf("%d",&time_period);
    float S_I = ((principal * rate_of_interest * time_period)/100);
    printf("S.I is %f is",S_I);
    return 0;
}

