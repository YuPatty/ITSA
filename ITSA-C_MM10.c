#include <stdio.h>
#include <math.h>

int main(){
    float c, f;
    scanf("%f", &c);

    f = (c * 9.0 / 5.0) + 32;
    printf("%.1f\n", round(f * 10) / 10.0);

    return 0;
}
