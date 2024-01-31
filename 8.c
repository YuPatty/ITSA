#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int flag = 0;

    if(n == 2){
        flag++;
    } else{
        for(int i = 2; i < n/2; i++){
            if(n % i == 0){
                flag++;
                break;
            }
        }
    }

    if(flag != 0){
        printf("NO\n");
    } else{
        printf("YES\n");
    }

    return 0;

}
