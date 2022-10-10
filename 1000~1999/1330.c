#include <stdio.h>

int a, b;

int main() {
    scanf("%d %d", &a, &b);
    
    if(a > b) printf(">\n");
    if(a < b) printf("<\n");
    if(a == b) printf("==\n");

    return 0;
}