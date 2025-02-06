#include<stdio.h>
#include<stdbool.h>

// User is going to enter only positve inputs

// Algirithm
/*
    START
        Accept one number as No
        Divide that number No by 2
        If remainder is 0
        then display the result as Even number
        otherwise display the result as Odd number
    STOP
*/

////////////////////////////////////////////////////////////
//
//  Function Name :     CheckEvenOdd
//  Description :       Used to check whether number is even or odd
//  Input :             Integer
//  Output :            Boolean
//  Author :            Suyash Madhukar Shinde
//  Date :              06/02/2025
//
////////////////////////////////////////////////////////////
bool CheckEvenOddd(unsigned int iNo1)
{
    if((iNo1 % 2)==0)
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
    unsigned int iValue1 = 0;
    bool bRet = false;
    printf("Enter the Number:");
    scanf("%d",&iValue1);
    bRet= CheckEvenOddd(iValue1);
    if(bRet == true)
    {
        printf("%d this is the Even Number:",iValue1);
    }
    else
    {
        printf("%dThis is a odd Number",iValue1);

    }
    return 0;
}