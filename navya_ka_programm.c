#include <stdio.h>

int main()
{
    FILE *ptr;
    int a;
    printf("Multiplication table of which number do you want? ");
    scanf("%d", &a);
    ptr = fopen("multiplication.txt", "w");
    for (int i = 1 ; i < 11 ; i++){
        fprintf(ptr, "%d times %d is %d\n", a, i, a * i);
    }
    fclose(ptr);
    return 0;
}