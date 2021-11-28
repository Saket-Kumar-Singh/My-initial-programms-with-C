#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<time.h>
int sum(int a,int b);
int main(){
    int a=3,b=4;
    printf("Give the value of a and b is %d,%d\n", a,b);
    printf("The sum of values oif a and b is %d\n", sum(a,b));
    printf("The value of a and b is %d ,%d\n",a,b);
    return 0;
    // Without pointer we cannot change value of a&b in main function.
}
int sum(int a,int b){
    a=4; 
    b=7;
    int sum= a+b;
    return sum;
}