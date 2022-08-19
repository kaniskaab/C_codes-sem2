#include <stdio.h>
int main(){
    int mat[3][3], count=0,k=0,i,j;
    printf("enter value of elements:\n");
    for( i=0;i<3;i++){
        for( j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is : \n");
        for(i=0;i<3;i++){
            for( j=0;j<3;j++){
                printf("%d\t",mat[i][j]);
            }
            printf("\n");
        }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

            if(mat[i][j]!=0){
                count++;
            }
        }
    }
    int sparse[i][j];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(mat[i][j]!=0){
                sparse[0][k]=i;
                sparse[1][k]=j;
                sparse[2][k]=mat[i][j];
                k++;
            }
        }
    }
    printf("The sparse is : \n");
         for(int i=0;i<3;i++){
            for(int j=0;j<count;j++){
                printf("%d\t",sparse[i][j]);
            }
            printf("\n");
        }
        return 0;


}