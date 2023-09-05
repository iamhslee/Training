#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        char arr[100];
        scanf("%s", arr);
        getchar();

        int point = 0;
        int stack = 0;

        for(int j = 0; j < strlen(arr); j++) {
            if(arr[j] == 'O') {
                stack ++;
                point += stack;
            }
            else {
                stack = 0;
            }
        }

        printf("%d\n", point);
    }

    return 0;
}