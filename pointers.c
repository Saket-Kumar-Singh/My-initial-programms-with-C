#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<time.h>

int main(){
     int i=67;
     int *j;
     j=&i;
     i=6;
     printf("Adtress of i is %u\n",&i);
     printf("Adtress of i is %d\n",j);
     printf("Adtress of j is %u\n",&j);
     printf("The value of i is %d\n",*(&i));
     printf("The value of j is %d\n",j);
     printf("The value of j is %d\n",*j);
    return 0;
}