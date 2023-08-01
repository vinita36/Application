// Accept character from user if it is capital then display all the character from the input 
//character till z. if input character is small then print all the character in reverse order till a. 
//in other cases return directly

#include<stdio.h>
void Display(char ch)
{
    char start = '\0';
    char end = '\0';
    for(ch = start; ch <= end; ch++)
    {
        printf("%c",ch);
    }

if((ch >= 'A') && (ch <= 'Z'))
{
  printf("ch,'Z'");
}
else if((ch >= 'a') && (ch <= 'z'))
{
    printf("'z', ch");
}
else
{
    printf("Invalid input");
}
printf("\n");
}


int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}