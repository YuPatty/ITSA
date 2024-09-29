#include <stdio.h>
#include<stdlib.h>  
#include<string.h>  

int main(){
    int sum, n;
    char str[999];
    scanf("%d", &n);
    getchar();  //消除換行
    for(int i = 0; i < n; i++){
        sum = 0;
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;

        for(int j = 0; j < strlen(str); j++){
            sum += (int)str[j];
        }
       
        printf("%d\n", sum);
    }
    return 0;
}