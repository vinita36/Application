// Accept N number from user and accept one another number as NO, return index of last occurance of that No

#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1
int LastOcc(int Arr[], int iLength, int iNo)
{
  int iCnt = 0;
  int iPos = ERR_NOTFOUND;

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
        iPos = iCnt;
    }
  }
  return iPos;
  
}


int main()
{

    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int iValue = 0;
    int *p = NULL;
    

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number \n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = LastOcc(p,iSize, iValue);
    if(iRet == -1)
    {
    printf("There is no such number");
    }
    else
    {
        printf("Last occurence of number is %d",iRet);
    }
    free(p);
    return 0;
}