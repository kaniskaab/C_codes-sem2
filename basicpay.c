#include <stdio.h>
struct employee
{  
    char name[100];
    float grosspay;
};
int main()
{
    struct employee em[10];
    int i;
    printf("Enter informaion : ");
    for (int i=0;i<10;i++)
    {
    printf("Enter name of employee : ");
    scanf("%s",&em[i].name);
    printf("Enter the basic pay : ");
    scanf("%f",&em[i].grosspay);
    }
    printf("The data is : ");
    for(int i=0;i<10;i++)
    {
    printf("Name : %s\n",em[i].name);
    em[i].grosspay= (em[i].grosspay/2)+em[i].grosspay;
    printf("gross pay : %f\n",em[i].grosspay);
    }

    return 0;
    
}