#include <stdio.h>

int main() {
    int arr[3][3];

    for(int i = 0; i < 3; i++){
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) {
            printf("True\n");
            return 0;
        }
    }
    for(int j = 0; j < 3; j++){
        if(arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j]){
            printf("True\n");
            return 0;
        }
    }

    if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
        printf("True\n");
        return 0;
    }

    if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]){
        printf("True\n");
        return 0;
    }

    printf("False\n");
    return 0;
}
