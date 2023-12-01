char *concatenatedString(char **arr, int size){
    int length = 0;
    for(int i = 0; i < size ; i++){
        length += strlen(arr[i]);
    }
    char* r = (char *)malloc((length * sizeof(char)) + 1);
    if(r == NULL){
        perror("exit failure");
        exit(EXIT_FAILURE);
    }
    int index = 0;
    for(int j = 0; j < size ; j++){
         strcpy(r + index, arr[j]);
         index += strlen(arr[j]);
    }
    return r;

}
bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
     char* concatenatedString1 = concatenatedString(word1, word1Size);
     char* concatenatedString2 = concatenatedString(word2, word2Size);
    int i = 0;
    for(i = 0; concatenatedString1[i] != '\0' && concatenatedString2[i] != '\0' ; i++){
        if(concatenatedString1[i]!=concatenatedString2[i]){
            free(concatenatedString1);
            free(concatenatedString2);
            return false;
        }
    }
    if(concatenatedString1[i] != concatenatedString2[i]){
        free(concatenatedString1);
        free(concatenatedString2);
        return false;
    }

    free(concatenatedString1);
    free(concatenatedString2);
    return true;
}
