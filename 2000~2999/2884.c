#include <stdio.h>

int hh, mm;

int main() {
    scanf("%d %d", &hh, &mm);

    mm -= 45;

    if(mm < 0) {
        hh--;
        mm = 60 + mm;
    }

    if(hh < 0) {
        hh = 24 + hh;
    }

    printf("%d %d\n", hh, mm);

    return 0;
}