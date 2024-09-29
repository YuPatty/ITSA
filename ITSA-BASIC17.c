#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char input[1000];
    char *word[100];    //字元指標陣列，每個元素都是指向一個字串（單字）的指標，最多100個單字。不使用固定長度的二維陣列，因為不同單字的長度不同
    int count = 0;      //單字數

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    char *token = strtok(input, " \r\n");

    while(token != NULL){
        for(int i = 0; token[i]; i++){
            token[i] = tolower(token[i]);
        }
        word[count] = (char*)malloc(strlen(token)+1);
        strcpy(word[count], token);
        count++;

        token = strtok(NULL, " \r\n");      //windows換行...
    }

    for(int i = count-1; i > 0; i--){
        for(int j = i-1; j >= 0; j--){
            if(strcmp(word[i], word[j]) == 0){
                free(word[i]);
                for(int k = i; k < count-1; k++){
                    word[k] = word[k+1];
                }
                count--;
                break;
            }
        }
    }
    
    for(int i = 0; i < count; i++){
        if(i == count - 1){
            printf("%s\n", word[i]);
        } else{
            printf("%s ", word[i]);
        }
    }
    
    for(int i = 0; i < count; i++){
        free(word[i]);
    }
    

    return 0;
}
