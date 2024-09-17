#include <stdio.h>
int main(){
    int row, column;
    scanf("%d %d", &row, &column);
    int matrix[row][column];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
   for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            if(j != row-1){
                printf("%d ", matrix[j][i]);
            }
            else{
                printf("%d", matrix[j][i]);
            }
        }
        printf("\n");
    }
    return 0;
}