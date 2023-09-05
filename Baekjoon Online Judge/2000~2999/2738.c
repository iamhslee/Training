#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr;

    int N, M;
    scanf("%d %d", &N, &M);

    arr = (int*)calloc(N * M, sizeof(int));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N * M; j++) {
            int num;
            scanf("%d", &num);
            arr[j] += num;
        }
    }

    for (int i = 0; i < N * M; i++) {
        printf("%d", arr[i]);
        if ((i + 1) % N == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    return 0;
}