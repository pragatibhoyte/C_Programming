// Write a recursive program which accepts Number from user and return smallest digit
// Input : 87983
// Output : 3

#include<stdio.h>

int Min(int iNo)
{
    static int iMin = 9;   // because digits are always between 0-9
    int iDigit = 0;
 
    if(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        Min(iNo/10);
    }
    
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("Smallest digit : %d\n",iRet);

    return 0;
}