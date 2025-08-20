#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the Number to check number is perfect Number : " );
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i; 
        }
    }
    if(n==sum)
    {
        printf("Number is Perfect !!");
    }
    else
    {
        printf("Number is not perfect !!");
    }
}
