#include<stdio.h>
int main()
{
    int m,n,i,s=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n&&i<=m;i++)
    {
        if(n%i==0&&m%i==0)
        {
            s=i;
        }
    }
    printf("%d",s);
}