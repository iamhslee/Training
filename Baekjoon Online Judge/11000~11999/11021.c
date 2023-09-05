#include <stdio.h>

int count;
int a, b;

int main() {
    scanf("%d", &count);

    for(int i = 0; i < count; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %-2d\n", i + 1, a + b);
    }

    return 0;
}