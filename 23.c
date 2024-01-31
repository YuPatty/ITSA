#include <stdio.h>
int main(){
    int N, a1, a2, a3;
    int x = 0, y = 0, z = 0;

    scanf("%d,%d,%d,%d", &N, &a1, &a2, &a3);

    int d = a1*15 + a2*20 + a3*30;

    if(N < d){
        printf("0\n");
    }else if(N == d){
        printf("0,0,0\n");
    }else{
        N = N - d;
        if(N >= 50){
            x = N/50;
            N %= 50;
        }
        if(N >= 5){
            y = N/5;
            N %= 5;
        }
        z = N;
        printf("%d,%d,%d\n", z, y, x);
    }
    
    return 0;
}