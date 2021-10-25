#include<stdio.h>
#include<math.h>

int main(){
int factorial=1;
int n;
printf("Write the no: ");
scanf("%d",&n);
int i=n;

while(i>0){
    factorial=factorial*i;
    i--;
}
printf("Factorial of %d is %d",n,factorial);
return 0;
}