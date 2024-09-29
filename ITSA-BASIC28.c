#include <stdio.h>
#include <string.h>

int main() {
    char J[9];        // 頭獎
    char s1[9], s2[9], s3[9]; // 特獎
    int count[7] = {0};       // 每個獎項的中獎數量計算
    long int money = 0;       // 總金額
    int m[6] = {200000, 40000, 10000, 4000, 1000, 200}; 
    int N;            // 發票數量
    int c = 0;        // 中幾碼
    int mm = 0;       // 目前的最高金額

    scanf("%s", J);
    scanf("%s %s %s", s1, s2, s3);
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        char num[9];  
        scanf("%s", num);

        if(strcmp(num, J) == 0){ 
            money += 2000000;
            count[0]++;
        } else{
            for (int b = 0; b < 3; b++) {
                char *s;
                if(b == 0){
                    s = s1;
                } else if(b == 1){
                    s = s2;
                }else{
                    s = s3;
                }
                // 中幾碼
                for (int j = 7; j >= 0; j--){
                    if (s[j] == num[j]) {
                        c++;
                    } else{
                        break;
                    }
                }

                for(int j = 8; j >= 3; j--){
                    if(c == j){
                        if(m[8 - j] > mm){
                            mm = m[8 - c];
                        }
                    }
                }
                c = 0;
            }

            for (int j = 0; j < 6; j++) {
                if (mm == m[j]) {
                    count[j + 1]++;
                }
            }

            money += mm;
            mm = 0;
        }
    }

    for (int i = 0; i < 7; i++) {
        if (i != 6) {
            printf("%d ", count[i]);
        } else {
            printf("%d\n", count[i]);
        }
    }

    printf("%ld\n", money);

    return 0;
}
