//尚未AC

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int suit_rank(char suit){
    if (suit == 'S') return 4;  // 黑桃
    if (suit == 'H') return 3;  // 紅心
    if (suit == 'D') return 2;  // 方塊
    if (suit == 'C') return 1;  // 梅花
    return 0;
}

int compare(const void *a, const void *b){
    char *cardA = (char*)a;
    char *cardB = (char*)b;
    
    //花色
    if (suit_rank(cardA[0]) != suit_rank(cardB[0])){
        return suit_rank(cardB[0]) - suit_rank(cardA[0]);
    }
    
    //數字
    int numA = atoi(cardA + 1);     //將字串中的數字取出，並跳過第一個字元
    int numB = atoi(cardB + 1);
    return numA - numB;
}

int main(){
    int stack;
    scanf("%d", &stack);  

    for (int i = 0; i < stack; i++){
        char card[52][4];  //每疊最多52張牌，每張牌最多佔4個字元
        int count = 0;     //計算該疊牌的張數

        while (scanf("%s", card[count]) == 1){
            count++;
            if (getchar() == '\n'){ 
                break;
            }
        }

        qsort(card, count, sizeof(card[0]), compare);

        for (int j = 0; j < count; j++){
            printf("%s", card[j]);
            if (j < count - 1) printf(" "); 
        }
        printf("\n");
    }

    return 0;
}
