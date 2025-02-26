#include<stdio.h>

int CountFactor(int iNo)
{
    int iCnt = 0;
    int Count = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
            Count++;
            
        }
    }
    
    return Count;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a Number..\n");
    scanf("%d",&iValue);
    iRet = CountFactor(iValue);
    printf("Number of Factors are..%d\n",iRet);

    return 0;
}