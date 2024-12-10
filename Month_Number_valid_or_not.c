#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number:\n");
    scanf("%d",&a);
    if(a<=12)
    {
        printf("Entered Number %d is Valid Month number",a);
    }
    else
    {
        printf("Entered Number %d is not Valid Month Number",a);
    }
    return 0;
}