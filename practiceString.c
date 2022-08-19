#include <stdio.h>
int main(){
    char str[100], reverse[100];
    int count=0;
    printf("Enter your string \n");
    scanf("%s",&str);
    for(int i =0; str[i]!='\0';i++){
        count++;
    }
    printf("the length of the string is %d\n",count);
    for(int i=0;i<count;i++){
        reverse[i] = str[count-i-1];
    }
    reverse[count]='\0';
    printf("the reverse of the string is %s\n",reverse);

    for(int i=0;i<count;i++){
        if(str[i]!=reverse[i]){
            printf("Not a pallindrome");
            return 0;
        }
    }
    printf("the string is a pallindrome");
    return 0;
}