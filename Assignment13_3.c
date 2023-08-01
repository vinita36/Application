/*
Design application for school management system
as school is primary there are 4 standards from 1 to 4
school fees of each standard is different
for first standard fees are 8900, for second standard 12790, for third standard 2100 and
for fourth standard fees are 23450
we have to accept standard from user and display the corresponding fees 
*/

#include<stdio.h>
int SchoolFees(int iStandard)
{
if((iStandard < 0) || (iStandard > 4))
{
    
    printf("Invalid input\n");
    printf("Please enter the standard in between 1 to 4");
    return 1;
}
  switch(iStandard)
{
    case 1:
    printf("first standard fees are 8900\n");
    break;
    case 2:
    printf("second standard fees are 12790\n");
    break;
    case 3:
    printf("third standard fees are 2100\n");
    break;
    case 4:
    printf("fourth standard fees are 23450\n");
    break;
}

}
int main()
{
    int iValue = 0;

    printf("Enter the standard\n");
    scanf("%d",&iValue);

    SchoolFees(iValue);
    return 0;
}