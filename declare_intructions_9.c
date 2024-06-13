// can use variable before defining it 
// make variable equal to eath other 
#include<stdio.h>

int main(){
    // int a = b+ 2; ----> this will give error
    int a = 2;
    int b = a + 4;
    printf("value of b variable is %d \n",b);
    int x,y,z;
    x=y=z=7;
    printf( "value of x is %d \nvalue of y is %d \nvalue of z is %d",x,y,z);
    return 0;
}

