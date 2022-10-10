#include <stdio.h>

int totalPrice, count;
int price, amount;
int sum = 0;

int main() {
    scanf("%d", &totalPrice);
    scanf("%d", &count);

    for(int i = 0; i < count; i++) {
        scanf("%d %d", &price, &amount);
        sum += price * amount;
    }

    if(totalPrice == sum) printf("Yes\n");
    else printf("No\n");

    return 0;
}