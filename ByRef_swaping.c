#include<stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;

    printf("Enter No a: ");
    scanf("%d", &a);

    printf("Enter No b: ");
    scanf("%d", &b);
    printf("After Swaping tha value a: %d & b: %d \n", a,b);

    swap(&a, &b);

    return 0;
}

void swap(int *a, int *b)
{   
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("Befor Swaping tha value a: %d & b: %d \n", a,b);
}