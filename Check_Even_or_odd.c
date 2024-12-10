#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Entered Number %d is an Even Number",a);
    }
    else
    {
        printf("Entered Number %d is a Odd Number",a);
    }
    return 0;
}