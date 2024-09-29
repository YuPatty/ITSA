#include <stdio.h>

void printBinary(int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);   //只提取第i位的值
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    printBinary(num);
    
    return 0;
}
