#include <stdio.h>
#include <string.h>

int main() {
    char input[100], output[100];
    int len, flag = 1;

    scanf("%s", input);
    len = strlen(input);

    for (int i = 0; i < len; i++) {
        output[i] = input[len-1-i];
    }
    output[len] = '\0';

    for (int j = 0; j < len; j++) {
        if (input[j] != output[j]) {
            flag = 0; 
            break; //記得!!!!
        }
    }

    if (flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
