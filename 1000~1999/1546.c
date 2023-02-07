#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *arr;
    int max = 1;
    float sum = 0;

    scanf("%d", &N);
    arr = (int *)malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 0; i < N; i++) {
        sum += (float)arr[i] / (float)max * 100.0;
    }

    printf("%f\n", sum / (float)N);

    return 0;
}