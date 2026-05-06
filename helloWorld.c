#include <stdio.h>
#include <string.h>


float addNum(float num1, float num2){
    float ans =  num1 + num2;
    return ans;
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
void prinStrArray(char *arr, size_t lengthArr){
    for (size_t i = 0; i < lengthArr; i++){
        printStr(arr[i], strlen(arr[i]));
    }
}

int chooseOp(){
    char *options[2][100] = {
        "1. Add",
        "2. Subtract"
    };
    char msg[] = "Please choose an operation using the numbers";
    prinStrArray(options, 2);
    int choice = getNum(msg, strlen(msg));
    return choice;
}


double getNum(char *msg, size_t lengthMsg){

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

int main() {
    int num1, num2;
    double ans;

    printf("Welcome to my C calculator!\n");


    char msg1[] = "Please enter the first number:";
    num1 = getNum(msg1, strlen(msg1));

    char msg2[] = "Please enter the second number:";
    num2 = getNum(msg2, strlen(msg2));


    do{
    int choice = chooseOp();

    switch (choice) {
        case 1:
            ans = addNum(num1, num2);
            break;
        case 2:

            break;
    }
    } while (choice < 2);

    ans = truncFloat(ans);

    printf("The answer is: %.1f", ans);

    return 0;
}

