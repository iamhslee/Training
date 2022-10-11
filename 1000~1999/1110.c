#include <stdio.h>

int input;
int count = 0;

int left;
int right;
int sum;
int current;

int main() {
    scanf("%d", &input);

    current = input;

    while(1) {
        if(current == input && count != 0) break;

        if(current < 10) {
            left = 0;
            right = current;
            sum = right;
        } else {
            left = current / 10;
            right = current % 10;
            sum = left + right;
        }

        current = (right * 10) + (sum % 10);

        count++;
    }

    printf("%d\n", count);

    return 0;
}