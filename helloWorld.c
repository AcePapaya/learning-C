#include <stdio.h>
#include <string.h>
#include <stdbool.h>


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

double getNum(char *msg, size_t lengthMsg, bool forceInt){

    double num;
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
        // if (forceInt){
           
        // }
        
        // else {
        //     if (sscanf(inp, "%lf", &num) == 1) {
        //     break; // Success: break out of the loop
        //     } else {
        //     printf("Invalid input. Try again: "); // If not an integer, ask again
        // }}
    }
    return num;
}

int chooseOp(){
    char msg[] = "Please choose an operation using the numbers\n";
    printStr(msg, strlen(msg));
    char *options[2] = {
        "1. Add\n",
        "2. Subtract\n"
    };
    int n = sizeof(options)/sizeof(options[0]);
    for (int i = 0; i < n; i++){
        printStr(options[i], strlen(options[i]));
    }

    int choice = getNum("", strlen(""), 1);
    return choice;
}

int main() {
    int num1, num2;
    double ans;

    printf("Welcome to my C calculator!\n");


    char msg1[] = "Please enter the first number:";
    num1 = getNum(msg1, strlen(msg1), 0);

    char msg2[] = "Please enter the second number:";
    num2 = getNum(msg2, strlen(msg2), 0);

    
    bool endLoop =  0;

    do{
    int choice = chooseOp();

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
            char msg[] = "Please enter a valid number";
            printStr(msg, strlen(msg));
            break;
    }
    } while (!endLoop);

    ans = truncFloat(ans);

    printf("The answer is: %.1f", ans);

    return 0;
}

