#include<stdio.h>
#include<string.h>
struct employee{
    char name[100];
    int id;
    float salary;
};
int main()
{
    struct employee e1;
    printf("Enter the name of employee number: \n");
    gets(e1.name);
    printf("Enter ID of employee number: \n");
    scanf("%d",&e1.id);
    printf("Enter the salary of employee number : \n");
    scanf("%f",&e1.salary);
    printf("Name is : %s\n",e1.name);
    printf("ID is : %d \n",e1.id);
    printf("Salary is : %f",e1.salary);
    return 0;
}