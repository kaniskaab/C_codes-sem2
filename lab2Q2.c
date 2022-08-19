#include<stdio.h>
#include<stdlib.h>

void sparse(int t,int a[3][3])
{
   while(t--)
        {   
            int row,column,value,i=1;
            printf("Enter row column and non zero value matrix %d: ",i);
            scanf("%d %d %d",&row,&column,&value);
            a[row-1][column-1]=value;
            i++;
        } 
}

void add(int a[3][3],int b[3][3],int sum[3][3])
{
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      sum[i][j] = a[i][j] + b[i][j];
    }
  }
}

void subtract(int a[3][3],int b[3][3],int result[3][3])
{
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      result[i][j] = a[i][j] - b[i][j];
    }
  }
}

void multiply(int a[3][3], int b[3][3], int result[3][3])
{
  for(int i=0; i < 3; i++)
  {
    for(int j=0; j<3;j++)
    {
      result[i][j]= 0;
      for (int k=0;k<3;k++)
      result[i][j] += a[i][k] * b[k][j];
    }
  }
}

void transpose(int matrix[3][3],int trans[3][3])
{
  for (int i=0;i<3;i++)
  { 	
    for (int j=0;j<3;j++)
    {
        trans[i][j] = matrix[j][i];
    }
  }
}

void display(int matrix[3][3])
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
       printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
}

int main()
{ 
    int r,c,t1,t2,d[3][3];
    int a[3][3]=
    {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };
    int b[3][3]=
    {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };
   
    printf("Enter the number of non zero values for matrix 1 and 2: ");
    scanf("%d %d",&t1,&t2);
    if(t1>4 || t2>4)
    {
        printf("The matrix you entered is not sparse!!!");
        exit(0);
    }
    else
    {
        sparse(t1,a);
        sparse(t2,b);
    } 
    int choice;
      do
      {
        printf("\nChoose the matrix operation,\n");
        printf("----------------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Transpose\n");
        printf("5. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
        switch (choice) {
          case 1:
            add(a, b, d);
            printf("Sum of matrix: \n");
            display(d);
            break;
          case 2:
            subtract(a, b, d);
            printf("Subtraction of matrix: \n");
            display(d);
            break;
          case 3:
            multiply(a, b, d);
            printf("Multiplication of matrix: \n");
            display(d);
            break;
          case 4:
            printf("Transpose of the matrix: \n");
            transpose(a, d);
            display(d);
            break;
          case 5:
            printf("Thank You.\n");
            exit(0);
          default:
            printf("Invalid input.\n");
            printf("Please enter the correct input.\n");
        }
      }while(1);
    
    return 0;
}
   