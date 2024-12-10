#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number");
    scanf("%d",&a);
    if(a<0)
    {
        printf("The Number Entered is Negative");
    }
    else
    {
        printf("The Number Entered is Positive");
    }

    
    return 0;
}