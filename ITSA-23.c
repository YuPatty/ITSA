#include <stdio.h>
int main(){
    int n, numapple, numorange, numpeach;
    scanf("%d,%d,%d,%d", &n, &numapple, &numorange, &numpeach);
    int cost = numapple*15 + numorange*20 + numpeach*30;

    int temp = n - cost;
    int c50 = temp / 50;
    temp %= 50;

    int c5 = temp / 5;
    temp %= 5;

    int c1 = temp;

    printf("%d,%d,%d\n", c1, c5, c50);
    return 0;
}