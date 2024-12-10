#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value");
    scanf("%d",&a);
    if(a>=-9 && a<=9)
    {
        printf("The Entered value %d is a Digit",a);
    }
    else
    {
        printf("The Entered value %d is a Number",a);
    }
    return 0;
}