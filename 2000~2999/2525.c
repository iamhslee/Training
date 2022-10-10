#include <stdio.h>

int hh, mm;
int duration;

int main() {
    scanf("%d %d", &hh, &mm);
    scanf("%d", &duration);

    mm += duration;

    while(mm >= 60) {
        mm -= 60;
        hh++;
    }

    while(hh >= 24) {
        hh -= 24;
    }

    printf("%d %d\n", hh, mm);

    return 0;
}