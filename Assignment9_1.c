// Accept N number from user and return differnce between summetion of even elements and summetion of odd elements

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
   int iCnt = 0;
   int Even = 0;
   int Odd = 0;
   
   for(int iCnt = 0; iCnt < iLength; iCnt++)
   {
    if((Arr[iCnt] % 2) == 0)
    {
        Even = Even + Arr[iCnt];
    }
    else
    {
        Odd = Odd + Arr[iCnt];
    }
   }
   int difference = Even - Odd;
}
 int main()
 {
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL){
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        printf("Enter elements:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p,iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;
 }