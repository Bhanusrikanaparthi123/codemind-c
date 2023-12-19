#include<stdio.h>
int main()
{
    int n,a,dc=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        dc=dc+1;
    }
        printf("%d
",dc);
}