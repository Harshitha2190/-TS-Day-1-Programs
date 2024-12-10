#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("The Entered Two Numbers are Equal\n");
        printf("%d is equal to %d",a,b);
    }
    else
    {
        printf("The Entered Two numbers are not Equal");
    }
    return 0;
    
}
