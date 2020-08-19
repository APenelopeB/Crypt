#include <stdio.h> 
char Crypt(char word,int key) {
    printf("Before : %c \t",word);
    printf("After : ");
    char crypted;
    crypted = word ^ key;
    printf("%c\n",crypted);
    return crypted;
}