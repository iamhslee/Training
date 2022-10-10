#include <stdio.h>

int year;
int isLeapYear = 0;

int main() {
    scanf("%d", &year);

    if(year % 400 == 0) isLeapYear = 1;
    else if(year % 4 == 0 && year % 100 != 0) isLeapYear = 1;

    printf("%d\n", isLeapYear);

    return 0;
}