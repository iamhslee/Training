#include <stdio.h>

int input[3];
int dice[6] = {0, };
int maxIndex = 0;

int main() {
    for(int i = 0; i < 3; i++) {
        scanf("%d", &input[i]);
        dice[input[i] - 1]++;
    }
    
    for(int i = 0; i < 6; i++) {
        if(dice[i] == 3) {
            printf("%d\n", 10000 + (i + 1) * 1000);
            break;
        } else if(dice[i] == 2) {
            printf("%d\n", 1000 + (i + 1) * 100);
            break;
        } else {
            if(dice[i] != 0 && i > maxIndex) {
                maxIndex = i;
            }
            if(i == 5) {
                printf("%d\n", (maxIndex + 1) * 100);
            }
        }
    }

    return 0;
}