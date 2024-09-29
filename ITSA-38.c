#include <stdio.h>
int main(){
    int num;
    float summercost = 0, nonsummercost = 0;
    float n[5][3] = {{120,2.1,2.1},{210,3.02,2.68},{170,4.39,3.61},{200,4.97,4.01},{0,5.63,4.5}};
    while ((scanf("%d", &num) != EOF)){
        for(int i = 0; i < 5; i++){
            if(num > n[i][0] && n[i][0] > 0){
                summercost += n[i][0] * n[i][1];
                nonsummercost += n[i][0] * n[i][2];
                num -= n[i][0];
            }
            else{
                summercost += num * n[i][1];
                nonsummercost += num * n[i][2];
                break;
            }
        }
        printf("Summer months:%.2f\n", summercost);  
        printf("Non-Summer months:%.2f\n", nonsummercost);  
    }
    





    return 0;
}