// switch case 

#include<stdio.h>

int main() {
    int rating;
    printf("enter value of rating : ");
    scanf("%d",&rating);
    switch (rating)
    {
    case 1 :
        printf("your rating is 1 \n");
        break;
    case 2 :
        printf("your rating is 2 \n");
        break;
    case 3 :
        printf("your rating is 3 \n");
        break;
    default :
        printf("your rating is INVALID ! \n");
        break;
    }
    return 0;
}


// default behaviour of switch case is that it will print all values after a given number 
// so spply break after each case 
