#include <stdio.h>
int main(){
    int ans = 0, ac[4], input[4];
    scanf("%d", &ans);

    for(int i = 3; i >= 0; i--){
        ac[i] = ans % 10;
        ans /= 10;
    }

    while(1){
       int num = 0, a = 0, b = 0;
       scanf("%d", &num);
       ans = 0;

        for(int i = 3; i >= 0; i--){
            input[i] = num % 10;
            num /= 10;

            if(input[i] == 0){
                ans++;
            }

            if(input[i] == ac[i]){
                a++;
                continue;
            }
            else{
                for(int j = 0; j < 4; j++){
                    if(input[i] == ac[j] && j != i){
                        b++;
                        break;
                    }
                }
            }
        }
        if(ans == 4){
            break;
        }
        else{
            printf("%dA%dB\n", a, b);
        }
    }

    return 0;
}
