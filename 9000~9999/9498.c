#include <stdio.h>

int score;
int gradeNum;
char grade[5] = {'A', 'B', 'C', 'D', 'F'};

int main() {
    scanf("%d", &score);

    if(score >= 90) gradeNum = 0;
    else if(score >= 80) gradeNum = 1;
    else if(score >= 70) gradeNum = 2;
    else if(score >= 60) gradeNum = 3;
    else gradeNum = 4;

    printf("%c\n", grade[gradeNum]);

    return 0;
}