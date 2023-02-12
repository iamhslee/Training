#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find(int n);

int main() {
    int N;
    int count = 0;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        count += find(i);
    }

    printf("%d\n", count);
}

int find(int n) {
    int flag = 0;
    int length = 0;

    int *digitArr = (int *)malloc(sizeof(int) * length);

    while(n > 0) {
        length++;
        digitArr = (int *)realloc(digitArr, length);
        digitArr[length - 1] = n % 10;
        n /= 10;
    }

    if(length == 1) return 1;

    int diff = digitArr[0] - digitArr[1];

    for(int i = 0; i < length - 1; i++) {
        if(diff == digitArr[i] - digitArr[i + 1]) {
            flag = 1;
        }
        else {
            flag = 0;
            break;
        }
    }
    
    free(digitArr);
    return flag;
}