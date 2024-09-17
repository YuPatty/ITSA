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
        scanf(" %c %d %d %d %d", &op, &c1.real, &c1.imag, &c2.real, &c2.imag);

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
        printf("%d %d\n", result.real, result.imag);
    }
    return 0;
}
