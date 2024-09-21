#include <stdio.h>
int main(){
    long double r,n,p,total = 0.0;
    scanf("%Lf", &r);
    scanf("%Lf", &n);
    scanf("%Lf", &p);

    for(int i = 0; i < (int)n; i++){
        total += p;
        total += total * r;
    }
    printf("%lld\n", (long long int)total);
    return 0;
}