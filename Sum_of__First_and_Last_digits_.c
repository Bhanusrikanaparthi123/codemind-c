#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&a);
    n=a%10;
    while(a>0)
    {
        i=a%10;
        a=a/10;
    }
    printf("%d",n+i);
}