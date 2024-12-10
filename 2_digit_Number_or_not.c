#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value:\n");
    scanf("%d",&a);
    if(a>=-99 && a<=99)
    {
        printf("Entered Value %d is a 2 digit number",a);
    }
    else
    {
        printf("Entered Value is not a 2 digit number");
    }
    return 0;
}