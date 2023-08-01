// Accept N numbers from user and accept one another number as No return frequency of No from it.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength,int iNo)
{
  int iCnt = 0;
  int Counter = 0;

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
        Counter++;
    }
  }
  return Counter;
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

    printf("Enter the number\n");
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
    iRet = Frequency(p,iSize, iValue);
    printf("%d",iRet);
    free(p);
    return 0;
}