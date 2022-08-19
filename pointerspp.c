#include <stdio.h>
int main()
{
    int n,m,count=0;
    printf("enter number : ");
    scanf("%d",&n);
    m=n/2;
    for(int i=2;i<=m;i++)
    {
        if(m%2==0)
        {
            printf("Nmuber is not prime");
            count=1;
            break;
        }
    }
    if(count==0)
    printf("Nmuber is prime");
    return 0;
}