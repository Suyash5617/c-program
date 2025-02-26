#include<stdio.h>
#include<stdbool.h>
bool DisplayResult(float fNo)
{
    if((fNo <=0.0f) ||(fNo>= 100.0f))
    {
        return false;
    }
   
    if((fNo>=0.0f)&&(fNo<=35.0f))
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    float fValue = true;
    bool bRet = false;
    printf("Enter the percentile:");
    scanf("%f",&fValue);
    bRet = DisplayResult(fValue);
    if(bRet == true)
    {
        printf("student is pass in the exam ");
    }
    else
    {
        printf("Student is fail in the exam");
    }
    return 0;
}