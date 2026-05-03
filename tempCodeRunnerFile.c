    char arr[20];
    sprintf(arr, "%f", &num);
    size_t lenArr = sizeof(arr)/sizeof(arr[0]);
    for (size_t i = 0; i < lenArr; i++){
        if (arr[i] = 0){
            arr[i] = NULL;
        }
    }
    num = (float)atof(arr);