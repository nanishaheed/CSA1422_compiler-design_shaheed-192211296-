#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ID_LEN 30

// 1. Lexical Analyzer to identify identifiers, constants, and operators
void lexicalAnalyzer(char *str) {
    printf("Lexical Analysis:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            printf("Identifier: %c\n", str[i]);
        } else if (isdigit(str[i])) {
            printf("Constant: %c\n", str[i]);
        } else if (strchr("+-*/", str[i])) {
            printf("Operator: %c\n", str[i]);
        }
    }
#include<stdio.h>
#include<string.h>
int main()  {
    char input[100],l[50],r[50],temp[10],tempprod[20],productions[25][50];
    int i=0,j=0,flag=0,consumed=0;
    printf("Enter the productions: ");
    scanf("%1s->%s",l,r);
    printf("%s",r);
    while(sscanf(r+consumed,"%[^|]s",temp) == 1 && consumed <= strlen(r))  {
        if(temp[0] == l[0])  {
            flag = 1;
            sprintf(productions[i++],"%s->%s%s'\0",l,temp+1,l);
        }
        else
            sprintf(productions[i++],"%s'->%s%s'\0",l,temp,l);
        consumed += strlen(temp)+1;
    }
    if(flag == 1)  {
        sprintf(productions[i++],"%s->e\0",l);
        printf("The productions after eliminating Left Recursion are:\n");
        for(j=0;j<i;j++)
            printf("%s\n",productions[j]);
    }
    else
        printf("The Given Grammar has no Left Recursion");
}
