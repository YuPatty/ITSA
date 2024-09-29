#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 31

void add_large_numbers(const char *num1, const char *num2, char *result){
    int carry = 0;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    
    // 確保從右到左加，確保不會超出字符串的範圍
    for(int i = 0; i < MAX_DIGITS; i++){
        int digit1 = (len1 - 1 - i >= 0) ? (num1[len1 - 1 - i] - '0') : 0;
        int digit2 = (len2 - 1 - i >= 0) ? (num2[len2 - 1 - i] - '0') : 0;
        
        int sum = digit1 + digit2 + carry;
        result[MAX_DIGITS - 1 - i] = (sum % 10) + '0';  
        carry = sum / 10;
    }

    // 進位
    if(carry > 0){
        for (int i = MAX_DIGITS - 1; i > 0; i--) {
            result[i] = result[i - 1];
        }
        result[0] = carry + '0';
    } else {
        // 沒有進位，向左移動一位
        memmove(result, result + 1, MAX_DIGITS); // 去掉最左側的 '0'
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();  // 清除換行符

    while(n--){
        char num1[MAX_DIGITS + 1], num2[MAX_DIGITS + 1], result[MAX_DIGITS + 2] = {0};
        fgets(num1, sizeof(num1), stdin);
        fgets(num2, sizeof(num2), stdin);
        
        // 去掉結尾的換行
        num1[strcspn(num1, "\n")] = 0;
        num2[strcspn(num2, "\n")] = 0;

        add_large_numbers(num1, num2, result);
        printf("%s\n", result);
    }

    return 0;
}
