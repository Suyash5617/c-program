/*
    Accept number as No
    Search all its factors
    Perform addition of all the factors
    If adddition is same as No
    then Display as No is perfect number
    otherwise Display as No is noyt perfect number
*/

#include<stdio.h>
#include<stdbool.h>
bool Checkperfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     // Filter
    {
        printf("Please enter positive numbers only\n");
        return false;
    }
    
    for(iCnt = 1;iCnt <=(iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;

        }
    }
    if((iSum == iNo))
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
    printf("Enter the Number..\n");
    scanf("%d",&iValue);
    bRet = Checkperfect(iValue);
    if(bRet == true)
    {
        printf("This Number is a perfect Number..%d\n",iValue);
    }
    else
    {
        printf("This Number is a not a perfect Number..%d\n",iValue);

    }


    return 0;
}