#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>



float addNum(float num1, float num2){
    float ans =  num1 + num2;
    return ans;
}

float subtractNum(float num1, float num2){

}


float truncFloat(float num){
    // char arr[20];
    // sprintf(arr, "%f", &num);
    // size_t lenArr = sizeof(arr)/sizeof(arr[0]);
    // for (size_t i = 0; i < lenArr; i++){
    //     if (arr[i] = 0){
    //         arr[i] = NULL;
    //     }
    // }
    // num = (float)atof(arr);
    return num;
}

void printStr(char *msg, size_t lengthMsg){
    for (size_t i = 0; i < lengthMsg; i++){
        printf("%c", msg[i]);
    }
}

double getDbl(char *msg, size_t lengthMsg){
    double num;
    char inp[100];

    printStr(msg, lengthMsg);
    printf("\n");

    while (fgets(inp, sizeof(inp), stdin)) {
            // Try to read an integer from the input string
             if (sscanf(inp, "%lf", &num) == 1) {
            break; // Success: break out of the loop
            } else {
            printf("Invalid input. Try again: "); // If not an integer, ask again
        }
    }
    return num;
}


int getInt(char *msg, size_t lengthMsg){
    int num;
    char inp[100];

    printStr(msg, lengthMsg);
    printf("\n");

    while (fgets(inp, sizeof(inp), stdin)) {
            // Try to read an integer from the input string
             if (sscanf(inp, "%d", &num) == 1) {
            break; // Success: break out of the loop
            } else {
            printf("Invalid input. Try again: "); // If not an integer, ask again
        }
    }
    return num;
}

int chooseOp(){
    char msg[] = "Please choose an operation using the numbers\n";
    printStr(msg, strlen(msg));
    char *options[2] = {
        "1. Add\n",
        "2. Subtract"
    };
    int n = sizeof(options)/sizeof(options[0]);
    for (int i = 0; i < n; i++){
        printStr(options[i], strlen(options[i]));
    }

    int choice = getInt("", strlen(""));
    return choice;
}

// bool isOp(char c){
//     return(c >= 40 && c <= 47);
// }
// struct brokenDown{
//         float num1;
//         char op;
//         float num2;
//     };

//  struct brokenDown strToFormattedStruct(char *str, int strLen){
//     float *nums[2];
//     const int MULTIPLIER = 10;
//     char op;

//     struct brokenDown a;

    // for (int i = 0; i < strLen; i++){
    //     if(isnum(str[i])){
    //         *nums = nums;
    //     }
    // }
// }

int main() {
    double num1, num2;
    double ans;

    // char test[] = "50+10";

    // strToFormattedStruct(test, strlen(test));



    printf("Welcome to my C calculator!\n");


    char msg1[] = "Please enter the first number:";
    num1 = getDbl(msg1, strlen(msg1));

    char msg2[] = "Please enter the second number:";
    num2 = getDbl(msg2, strlen(msg2));

    
    bool endLoop =  0;

    do{
    int choice = chooseOp();
    // printf("%d", choice);

    switch (choice) {
        case 1:
            ans = addNum(num1, num2);
            endLoop = 1; 
            break;

        case 2:
            ans = subtractNum(num1, num2);
            endLoop = 1; 
            break;
        default:
            char msg[] = "Please enter a valid number\n";
            printStr(msg, strlen(msg));
            break;
        }
    } while (!endLoop);

    ans = truncFloat(ans);

    printf("The answer is: %f", ans);

    return 0;
}

