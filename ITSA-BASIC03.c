#include <stdio.h>
int main(){
    float x, y;
    scanf("%f %f", &x, &y);
    if((x*x + y*y) <= 10000){
        printf("inside\n");
    } else{
        printf("outside\n");
    }
    return 0;
}