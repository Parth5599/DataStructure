#include <stdio.h>

int main()
{
    int roll_no;
    char name;

    printf(" What is your name : ");
    scanf("%d", &name);

    printf("What is your Roll No: ");
    scanf("%d", &roll_no);

    printf("Name : %d",name);
    printf("Roll No : %d",roll_no);

    return 0;
}