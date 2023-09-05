#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);

    int i;
    scanf("%d", &i);

    printf("%c\n", str[i - 1]);

    return 0;
}