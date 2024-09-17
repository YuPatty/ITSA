#include <stdio.h>
int main(){
    int start_hour, start_min, leave_hour, leave_min, totalmin, cost = 0;
    scanf("%d %d", &start_hour, &start_min);
    scanf("%d %d", &leave_hour, &leave_min);
    totalmin = (leave_hour * 60 + leave_min) - (start_hour * 60 + start_min);
    if(totalmin <= 120){
        totalmin /= 30;
        cost = totalmin * 30;
    }
    else if(totalmin > 120 && totalmin <= 240){
        int temp1 = totalmin - 120;
        temp1 /= 30;
        cost = temp1*40 + 120;
    }
    else if(totalmin > 240){
        int temp2 = totalmin - 240;
        temp2 /= 30;
        cost = temp2*60 + 120 + 160;
    }
    printf("%d\n", cost);
    return 0;
}