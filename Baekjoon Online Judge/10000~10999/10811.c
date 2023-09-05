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

        int *temp = (int *)calloc(J - I + 1, sizeof(int));
        for (int j = 0; j < J - I + 1; j++)
            temp[j] = basket[I - 1 + j];
        for (int j = 0; j < J - I + 1; j++)
            basket[J - 1 - j] = temp[j];
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