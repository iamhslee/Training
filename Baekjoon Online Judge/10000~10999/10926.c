#include <stdio.h>
#include <string.h>

int main() {
    char account[60];
    scanf("%s", account);
    strcat(account, "??!");
    printf("%s", account);
}