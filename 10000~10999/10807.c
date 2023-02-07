#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int V;
    int count = 0;
    int *arr;

    scanf("%d", &N);
    arr = (int *)malloc(sizeof(int) * N);
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &V);

    for(int i = 0; i < N; i++) {
        if(arr[i] == V) count++;
    }

    printf("%d\n", count);

    return 0;
}