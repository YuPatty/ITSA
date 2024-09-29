#include <stdio.h>
#include<stdlib.h>  
#include<string.h> 

int main(){
    float input[10], max = 0, min = 0, temp;
    int n = 0;
    while(scanf("%f", &input[n]) != EOF && n < 9){  
        n++;  
    }  
    for(int i = 0; i < 9; i++){  
        for(int j = 0; j < (9 - i); j++){  
            if(input [j] > input[j + 1] ){  
                temp = input[j];  
                input[j] = input[j + 1];  
                input[j + 1] = temp;  
            }  
        }  
    }  
    printf("maximum:%.2f\n", input[9]);  
    printf("minimum:%.2f\n", input[0]);  

    return 0;
}