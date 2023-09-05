#include <stdio.h>

char string[150];

int main() {
    while(~scanf("%[^\n]s", string)) {
        getchar();
        printf("%s\n", string);
    }

    return 0;
}