#include<stdio.h>
struct complex {
    int real;
    int imag;
};
struct complex reads(void);
void write(struct complex );
struct complex add(struct complex, struct complex);
struct complex sub(struct complex, struct complex);
int main()
{
    struct complex c1,c2,subt,sum;
    printf("Enter values of 1st complex number: \n");
    c1 = reads();
    printf("Enter values of 2nd complex number: \n");
    c2 = reads();
    printf("The 1st complex number is : ");
    write(c1);
    printf("The 2nd complex number is : ");
    write(c2);
    sum = add(c1,c2);
    printf("The sum is : ");
    write(sum);
    subt= sub(c1,c2);
    printf("The difference is : ");
    write(subt);
    return 0;
}
struct complex reads(void)
{
    struct complex t;
    printf("Enter the real part : ");
    scanf("%d",&t.real);
    printf("Enter the imaginary part : ");
    scanf("%d",&t.imag);
    return t;
}
void write(struct complex t)
{
    printf("%d + %di\n",t.real,t.imag);
}
struct complex add(struct complex a, struct complex b)
{ 
    struct complex t;
    t.real= a.real+b.real;
    t.imag= a.imag+b.imag;
    return t;
}
struct complex sub(struct complex a, struct complex b)
{ 
    struct complex sub;
    sub.real= a.real-b.real;
    sub.imag= a.imag-b.imag;
    return sub;
}