#include <stdio.h>

int main() {
    int arr[10];
    int leftover[42] = {0};
    int count = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        leftover[arr[i] % 42] = 1;
    }

    for(int i = 0; i < 42; i++) {
        if(leftover[i] == 1) count ++;
    }

    printf("%d\n", count);
}