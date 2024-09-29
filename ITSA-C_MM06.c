#include <stdio.h>
#include <math.h>

int main(){
    int miles;
    
    while(scanf("%d", &miles) != EOF){
        double kilometers = miles * 1.6; 
        double rounded = round(kilometers * 10) / 10.0;
        printf("%.1f\n", rounded);
    }

    return 0;
}
