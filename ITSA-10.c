#include <stdio.h>
int gcd(int a, int b){
    if(a % b == 0){
        return b;
    } else{
        return gcd(b, a % b);
    }
}

int main(){
    int a, b;
    int ans;
    scanf("%d %d", &a, &b);
    if(a < b){
       ans = gcd(b, a);
    }
    else{
       ans = gcd(a, b);
    }
    printf("%d\n", ans);
    return 0;
}
