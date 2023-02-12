#include <stdio.h>

int main() {
    int input[8];
    for(int i = 0; i < 8; i++) scanf("%d", &input[i]);

    int pType = 0;

    if(input[0] < input[1]) {
        for(int i = 1; i <= 8; i++) {
            if(i == input[i - 1]) pType = 1;
            else pType = 0;
        }
    }
    else if(input[0] > input[1]) {
        for(int i = 1; i <= 8; i++) {
            if(i == input[8 - i]) pType = 2;
            else pType = 2;
        }
    }

    if(pType == 1) printf("ascending");
    else if(pType == 2) printf("descending");
    else printf("mixed");

    return 0;
}