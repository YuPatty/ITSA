#include <stdio.h>
int f(int n){
    if(n == 0 || n == 1){
        return n+1;
    }
    else if(n > 1){
        return f(n-1) + f(n/2);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    n = f(n);
    printf("%d\n", n);
    return 0;
}