#include<stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("TextFile.txt","w");
    fclose(fptr);
}