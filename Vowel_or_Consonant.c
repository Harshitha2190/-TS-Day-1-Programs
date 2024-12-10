#include<stdio.h>
#include<ctype.h>
int main()
{
    char alp,loca;
    printf("Enter a Character:\n");
    scanf("%c",&alp);
    if(isalpha(alp))
    {
       loca=tolower(alp);
    
    if(loca=='a'||loca=='e'||loca=='i'||loca=='o'||loca=='u')
    {
     printf("Entered Alphabet %c is a Vowel",alp);
    }
    else
    {
        printf("Entered Alphabet %c is a Consonant",alp);
    }
    }
    else
    {
      printf("Entered Character is not an Alphabet");
    }
    return 0;
     
}