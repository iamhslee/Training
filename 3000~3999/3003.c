#include <stdio.h>

int chessPiece[6] = {1, 1, 2, 2, 2, 8};
int inputPiece[6];
int diff[6];

int main() {
    for(int i = 0; i < 6; i++) {
        scanf("%d", &inputPiece[i]);
        diff[i] = chessPiece[i] - inputPiece[i];
    }
    for(int i = 0; i < 6; i++) printf("%d ", diff[i]);
    printf("\n");
}