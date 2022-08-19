#include <stdio.h>
#include <string.h>
//we can also do it without using structures 
typedef struct student {
    char name[100];
    int id;
    float cgpa;
}m;
void call (struct student s1);
int main()
{

    struct student etc[100];
    struct student *ptr;
    
    struct student s1 = {"kaniskaa", 221029 , 9.9};
    struct student s2 = {"lakshay",221032,8.0};
    //example of typedef
    m s3={"abheek", 221003,8.9};
     ptr=&s1;
    printf("%s\n",(*ptr).name);
    printf("CGPA IS %f\n",(*ptr).cgpa);
    printf("%d\n",ptr->id);

    strcpy(etc[0].name,"kaniskaa");
    etc[0].id = 221029;
    etc[0].cgpa=9.9;
    strcpy(etc[2].name,"lakshya");
    etc[2].id= 221032;
    etc[2].cgpa=7.9;
    strcpy(etc[1].name,"abhaakNoChintu");
    etc[1].id= 221003;
    etc[1].cgpa= 8.0;
    printf("%d\n",etc[1].id);
    printf("%s",etc[0].name);
    call(s2);
    //example of typedef
    printf("%f",s3.cgpa);
    return 0;
}
void call (struct student s1)
{
    printf("Name is %s \n",s1.name);
    printf("ID is %d\n",s1.id);
    printf("cgpa is %f",s1.cgpa);
}