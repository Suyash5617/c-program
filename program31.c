#include<stdio.h>

int DisplayNumber(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number..\n");
    scanf("%d",&iValue);
    DisplayNumber(iValue);

    return 0;
}