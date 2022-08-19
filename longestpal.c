#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print(char *s,int start, int length){
    for(int i=start;i<=length;i++){
        printf("%c",s[i]);
    }
}
int longestapal(char *s){
    int n = strlen(s);
    if(n<2)
    return n;
    int i,length,max,min,start=0;
    int max_length=1;
    for(i=0;i<n;i++){
        min=i-1;
        max=i+1;
        while(max<n&&s[max]==s[i]){
            max++;
        }
        while(min>=0&&s[min]==s[i]){
            min--;
        }
        while(min>=0&&max<n&&s[max]==s[min]){
            min--;
            max++;
        }
        length=max-min-1;
        if(max_length<length){
            max_length=length;
            start=min+1;
        }
    }
    print(s,start,max_length+start-1);
    return max_length;
}
int main(){
    char *str="kaniskaa";
    longestapal(str);
    return 0;
}