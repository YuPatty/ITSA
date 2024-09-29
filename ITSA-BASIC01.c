#include <stdio.h>
#include <stdlib.h>

int main() {
    int input = 0;
    char num[10][5][5] = {{{'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}},
                          {{' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}},
                          {{'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', ' '}, {'*', '*', '*', '*', '*'}},
                          {{'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}},
                          {{'*', ' ', ' ', ' ', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}},
                          {{'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', ' '}, {'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}},
                          {{'*', ' ', ' ', ' ', ' '}, {'*', ' ', ' ', ' ', ' '}, {'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}},
                          {{'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}},
                          {{'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}},
                          {{'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}}};
    
    scanf("%d", &input);
    
    for(int i = 0; i <= 4; i++){        //每行輸出，不同列
        int temp = input;
        int helper = 1000;
        //printf("aaa");
        
        for(int k = 0; k < 4; k++){     //4位數
            int number = temp / helper; //最高位
            temp %= helper;
            helper /= 10;   
            //printf("ddd");            //百位十位個位

            for(int j = 0; j <= 4; j++){
                printf("%c", num[number][i][j]);
            }
            if(k != 3){
                printf(" ");
            }
        }
        printf("\n");                   //列換行
    }



    return 0;
}
