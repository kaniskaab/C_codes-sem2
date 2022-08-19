//using arrays
#include <stdio.h>
int main()
{
    int num;
    char c;
    printf("Enter your number ");
    scanf("%d",&num);
    if (num%2==0)
    {
        c = 'e';
    }
    else {
        c ='o';
    }
    switch(c)
    {
        case 'e':
        printf("Number is even ");
        break;
        case 'o':
        printf("Number is odd ");
        break;
        default:
        printf("Error");

    }
    return 0;
    
}