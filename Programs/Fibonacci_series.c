#include<stdio.h>
int main()
{
    int i,a=0,b=1,c,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
}
