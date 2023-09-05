#include <stdio.h>

int input;

int main() {
    scanf("%d", &input);
    
    for(int i=1; i<=input; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}