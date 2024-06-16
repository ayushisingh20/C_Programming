/*
conditional statements :
-> if-else statement 
    > else-if
-> switch statement 
*/


// IF - ELSE --> C-programn to chcek wheather a number is even or odd

#include<stdio.h>
int main() {
    int num;
    printf("Enter the value of num : ");
    scanf("%d",&num);
    if (num%2==0) {
        printf("%d is an even number",num);
    }
    else {
        printf("%d is a odd number",num); //else block is optinal
    }
    return 0;
}

/*
Relational Operators : 
=  --> assignment operator 
== --> equal to 
>= --> greator than equal to 
!= --> not equal to 
*/ 


// C-programn to chcek wheather a person can drive or not 

#include<stdio.h>

int main () {
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if (age>=18){
        printf("You can drive");
    }
    else {
        printf("You can't drive");
    }
}


// logic operator --> && (and), ||(or) and !(not)

#include<stdio.h>

int main () {
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if (age>=18 && age<=90){  //using and condition 
        printf("You can drive");
    }
    else {
        printf("You can't drive");
    }
}

// Else-if  ---> from all conditions only one condition will run, 
// once the condition is met next all will be skipped directly to the end


#include<stdio.h>

int main() {
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    if (n==1){
        printf("Your number is number 1");
    }
    else if (n==2) {
        printf("Your number is number 2");
    }
    else if (n==3) {
        printf("Your number is number 3");  // you can have any number of "else if"
    }
    else {
        printf("Your number is something other than 1,2 and 3");
    }    // this else is optional 

    // lets say i write another if- else statement here thats diffrent from the above group and it will run independently of above 
    return 0;
}


