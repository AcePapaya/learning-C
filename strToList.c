#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

void printStr(char *msg, size_t lengthMsg){
    for (size_t i = 0; i < lengthMsg; i++){
        printf("%c", msg[i]);
    }
}


struct nodeOp
{
    char op;
    struct nodeNum *next;
};

struct nodeNum
{
    float data;
    struct nodeOp *next;
};

void removeChar(char *str, int index) {
    int i, j = 0;
    int length = strlen(str);
    
    for (i = 0; i < length; i++) {
        if (i != index) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}

int main(){

    char test[] = "h10+2";

    struct nodeNum * head = NULL;

    float sum = 0;

    while(!isdigit(test[0])){
        removeChar(test, 0);
    }
    // printStr(test, strlen(test));

    for(int i = 0; i < strlen(test); i++){
        
    }


    return 0;
}