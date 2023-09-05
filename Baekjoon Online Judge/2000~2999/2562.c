#include <stdio.h>

int main() {
    int arr[9];
    int max = 0;
    int maxIndex;

    for(int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    printf("%d\n%d\n", arr[maxIndex], maxIndex + 1);

    return 0;
}