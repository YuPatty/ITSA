#include <stdio.h>
int main(){
    int n = 0, t[24] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int s, d;
        scanf("%d %d", &s, &d);
        for(int j = s-1; j < d-1; j++){
            t[j]++;
        }
    }
    n = t[0];
    for(int i = 0; i < 24; i++){
        if(n < t[i]){
            n = t[i];
        }
    }
    printf("%d\n", n);
    return 0;
}