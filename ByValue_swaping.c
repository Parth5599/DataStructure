#include <stdio.h>

void SwapValue(int a, int b);

int main()
{
    int a, b;

    printf("Enter No a: ");
    scanf("%d", &a);

    printf("Enter No b: ");
    scanf("%d", &b);
    printf("After swaping the value a:%d & b:%d \n",a,b);


    SwapValue(a, b);


    return 0;
}

void SwapValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("befor swaping the value a:%d & b:%d \n",a,b);

}
