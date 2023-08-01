// Accept N numbers from user and return the differanmce between largest and  smallest number
#include<stdio.h>
#include<stdlib.h>
 
int Difference(int Arr[], int iLength)
{
 int iCnt = 0;
 int iSmall =Arr[0];
 int iLarge = Arr[0];
int iDiff = 0;
 for(iCnt = 0; iCnt < iLength; iCnt++)
 {
    if(Arr[iCnt] < iSmall )
    {
        iSmall= Arr[iCnt];
    }
    if(Arr[iCnt]> iLarge);
    {
        iLarge = Arr[iCnt];
    }
    int iDiff = iSmall - iLarge;

 }
 return iDiff;
}



int main()
{
 
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;
    

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
    iRet = Difference(p, iSize);
     printf("Difference is %d",iRet);
    free(p);
    return 0;
} 