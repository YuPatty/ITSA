#include <stdio.h>
void check_exam_result(int listening, int reading, int speaking){
    int total = listening + reading + speaking;

    if (listening >= 60 && reading >= 60 && speaking >= 60){
        printf("P\n");
    }
    else if (total >= 220 && ((listening < 60 && reading >= 60 && speaking >= 60) ||
                              (reading < 60 && listening >= 60 && speaking >= 60) ||
                              (speaking < 60 && listening >= 60 && reading >= 60))){
        printf("P\n");
    }
    else if (total < 220 && ((listening < 60 && reading >= 60 && speaking >= 60) ||
                              (reading < 60 && listening >= 60 && speaking >= 60) ||
                              (speaking < 60 && listening >= 60 && reading >= 60))){
        printf("M\n");
    }
    else if (
             ((listening < 60 && reading < 60 && speaking >= 80) ||
              (listening < 60 && speaking < 60 && reading >= 80) ||
              (reading < 60 && speaking < 60 && listening >= 80))){
        printf("M\n");
    }
    else {
        printf("F\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int listening, reading, speaking;
        scanf("%d %d %d", &listening, &reading, &speaking);
        check_exam_result(listening, reading, speaking);
    }
    return 0;
}
