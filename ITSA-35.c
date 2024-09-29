#include <stdio.h>  
void sort(int array[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int T, m, k;
        scanf("%d %d %d", &T, &m, &k);
        int gift[k];
        for(int i = 0; i < k; i++){
            scanf("%d", &gift[i]);
        }

        sort(gift, k);
       
        int total = 0;
        for(int i = 0; i < m; i++){
            total += gift[i];
        }

        if(total <= T){
            printf("%d\n", total);
        } else {
            printf("Impossible\n");
        }
    }
    return 0;
}