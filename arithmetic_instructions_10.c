#include<stdio.h>
#include<math.h>
 int main(){
    int a = 23;
    int b = 22;
    int c = (3*2)+1; // 3,2,1 --> are operands ; *,+ ---> operators
    int z = b*a ;
    int s;
    s = z*a; // legal 
    // z*a = s ; Illigal 
    // % modular division operator ---> gives reaminder  ---> CANT BE APPLIED ON FLOAT 
    printf("5 when divided by 2 leaves a remainder of %d \n",5%2);
    printf("5 when divided by -2 leaves a remainder of %d \n",5%-2);
    printf("-5 when divided by 2 leaves a remainder of %d \n",-5%2);  // THE SIGN OF NUMERTAOR IS CONSIDERED 
    // NO OPERATOR IS ASSUMED TO BE PRESENT --> 5*2 is not equal to 5.2 
    // NO OPERATOR IS ASSUMED TO BE PRESENT --> a*b is not equal to ab
    // NO operator to perform EXPONENTIATION in c  ---> 4^5 invalid 
    // use pow(x,y) from #include<math.h> to find exponential --> also use %f to print the value 
    printf("the value of 4 to the power 5 is %f \n", pow(4,5)); // --> use %f because it returns a real number
    /* 
    An Arithemtic operation between 
    int & int --> int 
    int & float --> float
    float & float --> float 
    */
    int f;
    f = 10;
    float g = 1.1;
    printf(" An operation between int and int is interger :  %d \n",f+f);
    printf(" An operation between float and int is float : %f \n" ,f+g);
    printf(" An operation between float and float is float:  %f \n",g+g);
    printf(" An operation between float and integer is float:  %f \n",f/g); // float value 
    printf(" An operation between float and integer is float:  %f \n",g/f); // float value 
    printf(" An operation between float and integer is float:  %d \n",5/2); // integer value 
    printf(" An operation between float and integer is float:  %d \n",2/5); // integer value 
    int h = 3.5; // 3.5 will be demoted to 3 since h cant store float values 
    printf("value of h will be demoted from 3.5 to %d ",h);
    float k = 3; // 3 will be promoted to 3.0 
    printf("value of h will be promoted from 3 to %f ",k);
    return 0;
 }