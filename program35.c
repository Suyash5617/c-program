#include<stdio.h>

// Time Complexity : O(N)

int AdditionFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    //      1          2          3
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum +iCnt;    // 4
        }
       
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = AdditionFactors(iValue);

    printf("Summation of the Display Factors is..%d/n",iRet);

    return 0;
}
