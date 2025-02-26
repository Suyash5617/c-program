#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo>=30) && (iNo<=50))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the number:");
    scanf("%d",&iValue);
    bRet = CheckRange(iValue);
    if(bRet == true)
    {
        printf(" %d The Number is in the range of 30 and 50",iValue);
    }
    else
    {
        printf(" %d The Number is not in the range of 30 and 50",iValue);
    }

  return 0;
}