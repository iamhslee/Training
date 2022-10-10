#include <stdio.h>

int x, y;
int quadrant;

int main() {
    scanf("%d", &x);
    scanf("%d", &y);

    if(x > 0) {
        if(y > 0) quadrant = 1;
        else quadrant = 4;
    } else {
        if(y > 0) quadrant = 2;
        else quadrant = 3;
    }

    printf("%d\n", quadrant);

    return 0;
}