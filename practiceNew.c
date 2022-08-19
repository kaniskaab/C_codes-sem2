#include <stdio.h>
int main(){
    int mat1[3][3];
    printf("enter values of 1st matrix elements\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("the first matrix is \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    int mat2[3][3];
    printf("enter values of 2nd matrix elements\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("the second matrix is \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    int matSum[3][3], matDiff[3][3], matProduct[3][3], transpose[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matSum[i][j]= mat1[i][j] + mat2[i][j];
        }
    }
    printf("The sum of 1st and 2nd matrix is :\n");
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",matSum[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matDiff[i][j]= mat1[i][j] - mat2[i][j];
        }
    }
    printf("the difference of 1st and 2nd matrix is : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",matDiff[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matProduct[i][j]= mat1[i][j] * mat2[i][j];
        }
    }
    printf("the product of 1st and 2nd matrix is : \n");
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",matProduct[i][j]);
        }
        printf("\n");
    }
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[j][i]= mat1[i][j];
        }
    }
    printf("the transpose of the 1st matrix is :\n");
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
}
