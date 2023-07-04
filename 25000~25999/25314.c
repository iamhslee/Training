#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N >= 4) {
        printf("long ");
        N -= 4;
    }
    printf("int\n");

    return 0;
}