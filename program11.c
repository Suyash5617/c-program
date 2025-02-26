#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fNo)
{
    if((fNo>=0.0f) && (fNo<35.0f))
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
    float fValue = 0.0;
    bool bRet = false;
    printf("Enter the Percentage:");
    scanf("%f",&fValue);
    bRet = DisplayResult(fValue);
    if(bRet == true)
    {
        printf("%d student is fail:",fValue);
    }
    else
    {
        printf("%d student is pass",fValue);
    }
    return 0;
}