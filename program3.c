#include<stdio.h>
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    printf("Enter the First number:");
    scanf("%d",&iValue1);
    printf("Enter the Second number:");
    scanf("%d",&iValue2);
    iValue3 = iValue1+iValue2;
    printf("Addittion is:%d/n",iValue3);
    return 0;
}