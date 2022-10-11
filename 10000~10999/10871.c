#include <stdio.h>

int size, x;
int input;

int main() {
    scanf("%d %d", &size, &x);
    for(int i = 0; i < size; i++) {
        scanf("%d", &input);
        if(input < x) printf("%d ", input);
    }
    printf("\n");

    return 0;
}