#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char input[101];
    int wordcount[26] = {0}, lettercount = 0;
    char WB[27] = "abcdefghijklmnopqrstuvwxyz";

    fgets(input, 101, stdin);
    input[strcspn(input, "\n")] = 0;

    char *token = strtok(input, " ");
    while(token != NULL){
        lettercount++;
        for(int i = 0; i < strlen(token); i++){
            char ch = token[i];
            if(isalpha(ch)){
                ch = tolower(ch);
                //發現可以用wordcount[ch - 'a']++;代替以下
                for(int j = 0; j < 52; j++){
                    if(ch == WB[j]){
                        wordcount[j]++;
                        break;
                    }
                }
            }
        }
        token = strtok(NULL, " ");
    }
    printf("%d\n", lettercount);
    for(int k = 0; k < 52; k++){
        if(wordcount[k] != 0){
            printf("%c : %d\n", WB[k], wordcount[k]);
        }
    }
    return 0;
}