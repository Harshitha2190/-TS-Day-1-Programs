#include<stdio.h>
#include<math.h>
int main()
{
    int num,sqroot;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Enter number %d is not a Perfect Square(Negative numbers are cannot be a perfect square)",num);
    }
    sqroot= sqrt(num);
    if(sqroot*sqroot==num)
    {
        printf("Entered number %d is a Perfect Square",num);
    }
    else
    {
        printf("Entered number %d is not a Perfect Square",num);
    }
}