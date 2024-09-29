#include <stdio.h>  
#include <string.h>  
#include <ctype.h>  
int main() {  
    char c, s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";  
    while(scanf("%c", &c) != EOF) {  
        c = tolower(c);  
        char *p = strchr(s, c);  
        if(p)  
            printf("%c", *(p + 1));  
        else  
            printf("%c", c);  
        if(c == "\n")  
            printf("\n");  
    }  
    return 0;  
} 