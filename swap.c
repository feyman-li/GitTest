#include <stdio.h>

void swap(int *a, int *b)
{
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}


    
int main()
{
    int a = 10,b =1;
    swap(&a, &b);
    printf("%d ", a);

    return 0;
}
