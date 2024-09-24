#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main(){  
    char in[999], *str;  
    while(gets(in) != NULL){  
        int n = 0, a[999], sum = 0;  
        float ave;  
        str = strtok(in, " ");  
        while(str != NULL){  
            sscanf(str,"%d", &a[n]);  //將分段的字串轉換為整數，並儲存在a中
            n++;  
            str = strtok(NULL, " ");  
        }  
        for(int i = 0; i < n; i++){
            sum += a[i];
        }  
        ave = (float)sum / (float)n;  
        printf("Size: %d\n", n);  
        printf("Average: %.3f\n", ave);  
    }
    return 0;
 } 