#include <stdio.h>

int d(int n);

int main() {
    int arr[10000] = {0};

    for(int i = 1; i <= 10000; i++) {
        int result = d(i);

        if(result <= 10000) arr[result - 1] = 1;
    }

    for(int i = 0; i < 10000; i++) {
        if(arr[i] == 0) printf("%d\n", i + 1); 
    }

    return 0;
}

int d(int n) {
    int result = n;

    while(n > 0) {
        result += n % 10;
        n /= 10;
    }

    return result;
}