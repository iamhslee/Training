#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *arr;
    int max = -1000000, min = 1000000;

    scanf("%d", &N);
    arr = (int *)malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("%d %d\n", min, max);

    return 0;
}