/*
(C) 2020, Penelope (penelopeabcdefghijk@gmail.com)
All rights reserved 
*/
#include <stdio.h>
#include "Crypt.h"
int main() {
    //Making file info.txt
    FILE* file = fopen("info.txt","w");
    //Making symbol variable (type: char)
    char symbol;
    //Getting The symbol from user
    printf("Enter char pls: (char)  ");
    symbol = getchar();
    //Writing the original version in file info.txt
    fprintf(file,"Befor: %c\n",symbol);
    //Making variable key (type: int)
    int key;
    //Getting the key number to crypt
    printf("Enter key pls: (int)  ");
    scanf("%i",&key);
    //Writeing the crypted version in file info.txt
    fprintf(file,"After: %c\n",Crypt(symbol,key));
    return 0;
}