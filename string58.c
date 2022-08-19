//uses hashingggg

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int occurence(char S[],char c){
    int n=strlen(S);
    int count=0;
    for(int i=0;i<n;i++){
        if(c==S[i]){
            count++;
        }
    }
    return count;

}
void print(char a[],int n){
    for(int i=0;i<n;i++){
        printf("%s\t",a[i]);

    }
    
}
int main(){
    char S[100];
    scanf("%s",&S);
    int n = strlen(S);
    int size=n;
    char new[100];
    // printf("%d",n);
   
    strcpy(new,S); 
    // printf("%s",new);

    for(int i=0;i<strlen(new);i++){
        int j=i+1;
        while(j<strlen(new))
        {
            if(new[i]==new[j])
            {
                 for(int m =j;m<strlen(new);m++){
                    new[m]=new[m+1];
                }
            }
            j++;

        }
    }
    printf("%s",new);
    return 0;
    


}