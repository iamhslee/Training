#include <stdio.h>

int main() {
    int a[100001], b[100001];
    int N, M;
    
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++) {
        scanf("%d", &a[i]);
        b[i] = b[i - 1] + a[i];
    }
    
    int i, j;
    while(M--) {
        scanf("%d %d", &i, &j);
        printf("%d\n", b[j] - b[i - 1]);
    }
}