#include <stdio.h>
int main(){
    int N, sum = 0;
    scanf("%d", &N);
    for(int i = 0; i <= N; i++){
        if(i % 3 == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}