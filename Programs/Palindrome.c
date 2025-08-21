#include<stdio.h>
int main()
{
    int n,r,i,sum=0;
    printf("Enter the Palindrome Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("Palindrome Number is : %d",sum);
}
