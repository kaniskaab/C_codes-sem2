#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print(char *s,int start,int max_length){
    for(int i=start;i<=max_length;i++){
        printf("%c",s[i]);
    }
}
int longestPal(char *s ){
    int n = strlen(s);
    if(n<2)
    return n ;
    int high,low,start,length;
    int max_length=1;
    for(int i=0;i<n;i++){
        high=i+1;
        low=i-1;
        while(high<n&&s[high]==s[i])
        high++;
        while(low>=0&&s[low]==s[i])
        low--;
        while(high<n&&low>=0&&s[high]==s[low])
        {
            high++;
            low--;
        }
        length=high-low-1;
        if(max_length<length){
            max_length=length;
            start=low+1;
        }
    }
    print(s,start,max_length+start-1);//pay attention to this 
    return max_length;
}
int main(){
    char str[100];
    printf("Enter\n");
    gets(str);
    longestPal(str);
}