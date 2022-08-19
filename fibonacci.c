#include <stdio.h>
int checkprime(int n)
{
    int count;
    for (int i=1;i<=n;i++)
    {
        count=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
       
    }
    if(count==0)
    return 1;
    else
    return 0;
}
int main()
{
    int y,num;
    scanf("%d",&num);
    for(y=0;y<=num;y++)
    {
        if (checkprime(y)==1)
        printf("%d",y);
    
    }
}