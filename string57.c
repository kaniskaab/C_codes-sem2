#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int isPalindrome(char S[])
{
    char temp;
    int n = strlen(S);
    // for(int i=0;S[i]!='\0';i++){
    //     n++;
    // }
    // n++;
    char new[n];
    for(int i=0;i<n;i++){
        new[i]=S[n-1-i];
    }
    for(int i=0;i<n;i++){
        if(new[i]!=S[i]){
            return 0;
        }
        
    }
    return 1;
    
}
int main(){
    char S[100];
    scanf("%s",&S);
    printf("%d",isPalindrome(S));
    return 0;
}