#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0,r;
    while(s!=1&&s!=4)
    {
        s=0;
        while(n!=0)
        {
            r=n%10;
            s+=(r*r);
            n/=10;
        }
        n=s;
    }
    if(s==1)
    printf("True");
    else
    printf("False");
}