#include <stdio.h>

int num;

int fact(int n);

int main() {
    scanf("%d", &num);

    printf("%d\n", fact(num));

    return 0;
}

int fact(int n) {
    if(n == 0) return 0;
    else return fact(n - 1) + n;
}