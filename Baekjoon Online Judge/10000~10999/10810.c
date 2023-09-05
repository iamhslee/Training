#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int *basket = (int *)calloc(N, sizeof(int));

    for (int i = 0; i < M; i++) {
        int I, J, K;
        scanf("%d %d %d", &I, &J, &K);

        for (int j = I - 1; j < J; j++) {
            basket[j] = K;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d", basket[i]);
        if (i != N - 1)
            printf(" ");
        else
            printf("\n");
    }

    return 0;
}