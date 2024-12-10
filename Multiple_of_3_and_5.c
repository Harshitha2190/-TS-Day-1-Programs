#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a/3 && a/5)
    {
        printf("Entered number %d is a Multiple of 3 and 5",a);
    }
    else
    {
        printf("Entered number %d is not a Multiple of 3 and 5",a);
    }
    return 0;
}