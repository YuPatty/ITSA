#include <stdio.h>
#include <string.h>

int main(){
    char input[129];
    char word[513];
    scanf("%s", input);
    scanf("%s", word);
    int count = 0;

    for(int i = 0; i < strlen(word) - strlen(input) + 1; i++){
        if(strncmp(&word[i], input, strlen(input)) == 0){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}