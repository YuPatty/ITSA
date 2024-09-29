#include <stdio.h>

int main(){
    int num1, num2, quotient, remainder;
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int product = num1 * num2;
    int difference = num1 - num2;
    if(num2 != 0){
        quotient = num1 / num2;
        remainder = num1 % num2
    }

    printf("%d+%d=%d\n", num1, num2, sum);
    printf("%d*%d=%d\n", num1, num2, product);
    printf("%d-%d=%d\n", num1, num2, difference);
    printf("%d/%d=%d...%d\n", num1, num2, quotient, remainder);

    return 0;
}
