#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char user[140];
char parsed[140];
char *ptr1 = user, *ptr2 = parsed, testptr;
int i = 0, j = 0; /* indices */
bool scalarFlag; /* shorthand to refer to scalars and arrays */
// Hard coded variables
char A[51], B[51], C[51], R[51], X[51], Y[51];
int a, b, c, r, x, y;

#include "lab2_funcs.c" /* Including my functions .c file */

    // Processes input into separate words to perform their subsequent action
int processLine(char *line){
    const char delim[2] = " ";
    int len = strlen(line);
    while(*line != '\0'){
    *ptr2 = *line;
    line++;
    ptr2++;
    }
    *ptr2 = '\0';
    printf("\nString is length: %i", len);
    printf("\nString is: %s\n", parsed);
}

int main(int argc, char *argv[]) {
printf("--------------------------------------\n");
printf("Welcome to a shitty version of Matlab!\n");
printf("--------------------------------------\n\n");
printf("For a list of available commands, type \"help\"\n");

while(1){
    // Get input from user
    printf("\nType a command, end with \"Enter\": ");
    gets(user);
    // Checks for special cases
    if(strcmp(user,"help") == 0){
        printhelp();
        fflush(stdin);
        } else if((strcmp(user,"exit") == 0) || ((strcmp(user,"quit") == 0))) {
        exit(0);
        } else {
        processLine(ptr1);
        ptr2 = parsed;
        }
    }
}
