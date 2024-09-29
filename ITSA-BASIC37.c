#include <stdio.h>
int main(){
    int dice[4];
    int count[7] = {0};

    for(int i = 0 ; i < 4; i++){
        scanf("%d", &dice[i]);
        count[dice[i]]++;
    }

    for(int i = 1; i <= 6; i++){
        if(count[i] == 4){
            printf("WIN\n");
            return 0;
        }
    }
    int pairs = 0, sum1 = 0, sum2 = 0;

    for(int i = 1; i <= 6; i++){
        if(count[i] == 2){
            if(pairs == 0){
                sum1 = i;
            } else if(pairs == 1){
                sum2 = i;
            }
            pairs++;
        }
        else if(count[i] == 3){
            printf("R\n");
            return 0 ;
        }
    }

    if(pairs == 2){
        printf("%d\n", (sum1 > sum2 ? sum1 : sum2) * 2);
    }
    else if(pairs == 1){
        printf("%d\n", sum1 * 2);
    }
    else if(pairs == 0){
        printf("R\n");
    }else{
        printf("R\n"); 
    }

    return 0;
}