#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int *basket = (int *)calloc(N, sizeof(int));
    for (int i = 0; i < N; i++)
        basket[i] = i + 1;

    for (int i = 0; i < M; i++) {
        int I, J;
        scanf("%d %d", &I, &J);

        int temp = basket[I - 1];
        basket[I - 1] = basket[J - 1];
        basket[J - 1] = temp;
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