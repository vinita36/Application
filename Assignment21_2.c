//Accept character from user if character is small display its corresponding capital and if it is 
//small then display its corresponding capital a\.in other cases display as it is

#include<stdio.h>
void Display(char ch)
{
    
    if((ch >='a') &&(ch <= 'z'))
    {
        ch = ch -'a'+'A';
         printf("corresponding small letter:%c\n",ch);
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch - 'A' + 'a'; 
        printf("corresponding capital lettr:%c\n",ch);

    }
    else
    {
        printf("Not an alphabate character :%c\n",ch);
    }
   
    
}
int main()
{
    char cValue = '\0';
    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}