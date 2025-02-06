#include<stdio.h>
#include<stdbool.h>

// User is going to enter only positve inputs

// Algirithm
/*
    START
        Accept one number as No
        Divide that number No by 3
        If remainder is 0
        Divide that number No by 5
        If remainder is 0
        then print number is divisible by 3 and 5
        otherwise display the it is not divisble by 3 , 5
    STOP
*/

////////////////////////////////////////////////////////////
//
//  Function Name :     CheckDivisible
//  Description :       Used to check whether number is divisible by 3 & 5
//  Input :             Integer
//  Output :            Boolean
//  Author :            suyash Madhukar shinde
//  Date :              06/02/2025
//
////////////////////////////////////////////////////////////
bool Divisible(unsigned int iNo)
{
    if(((iNo % 3)==0) && ((iNo % 5)==0))
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
    unsigned int iValue = 0;
    bool bRet = false;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);
    bRet= Divisible(iValue);
    if(bRet == true)
    {
        printf("%d This Number is Divisible by 3 or 5",iValue );
    }
    else
    {
        printf("%d This Number is not Divsible by 3 or 5",iValue);
    }

    return 0;
}