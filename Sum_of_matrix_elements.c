
#include<stdio.h>
int main()
{
    int m,n,arr[100][100],i,j,s=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        s+=arr[i][j];
    }
    printf("%d",s);
}
