#include <stdio.h>
#include <math.h>

int main(){
    double sideLength;
    scanf("%lf", &sideLength);

    double area = sideLength * sideLength;

    printf("%.1f\n", round(area * 10) / 10); 

    return 0;
}
