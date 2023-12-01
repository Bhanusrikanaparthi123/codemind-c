#include<stdio.h>
int main()
{
    int t,n,m,k,p,q,r;
    scanf("%d%d%d%d%d%d%d",&t,&n,&m,&k,&p,&q,&r);
    if((n+k)<=m)
    printf("YES
");
    else 
    printf("NO
");
    if((p+r)<=q)
    printf("YES");
    else
    printf("NO");
}