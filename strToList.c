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


struct Node
{
    void *data;
    struct Node *next;
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
    void *ptr = &test;
    float temp;
    bool positive;

    struct Node *head = NULL;

    float sum = 0;

    if (test[0] == '-'){
            positive = 0;
        }
    while(!isdigit(test[0])){
        removeChar(test, 0);
    }


    for(int i = 0; i < strlen(test); i++){
        // if (){

        // }
    }

    return 0;
}