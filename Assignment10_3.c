//Accept N number from user check wether that numbers contains 11 in it or not
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
   int iCnt = 0;
}
int main()
{

    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

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
    bRet = Check(p,iSize);
    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printdf("11 is absent");
    }
    free(p);
    return 0;
}