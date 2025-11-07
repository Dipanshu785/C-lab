#include<stdio.h>
#include<conio.h>
int main()
{

    int number,temp,sum,remainder;
    printf("The Armstrong number between 1-100 \n");
    for(number=1;number<=1000;number++)
    {
        sum=0;
        temp=number;
        while(temp!=0)
        {
            remainder=temp%10;
            sum=sum+(remainder*remainder*remainder);
            temp=temp/10;
        }
        if(sum==number)
            printf("%d \n",number);

    }
    return 0;
}
