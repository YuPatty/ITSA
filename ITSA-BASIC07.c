#include <stdio.h>
typedef struct{
    int real;
    int imag;
} complex;
int main(){
    int n;
    char op;
    complex c1, c2, result;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf(" %c %d %d %d %d", &op, &c1.real, &c1.imag, &c2.real, &c2.imag);  //留一個空格以避免換行符被錯誤讀取

        if(op == '+'){
            result.real = c1.real + c2.real;
            result.imag = c1.imag + c2.imag;
        }
        else if(op == '-'){
            result.real = c1.real - c2.real;
            result.imag = c1.imag - c2.imag;
        }
        else if(op == '*'){
            result.real = c1.real * c2.real - c1.imag * c2.imag;
            result.imag = c1.real * c2.imag + c1.imag * c2.real;
        }
        else if(op == '/'){
            float denominator = c2.real * c2.real + c2.imag * c2.imag;
            if (denominator == 0) {
                continue;
            }
            result.real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
            result.imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
        }
        printf("%d %d\n", result.real, result.imag);
    }
    return 0;
}
