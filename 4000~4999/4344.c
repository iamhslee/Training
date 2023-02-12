#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int person;
    float *countArr;

    countArr = (float *)malloc(sizeof(float) * N);

    for(int i = 0; i < N; i++) {
        int sum = 0;
        float avg;
        int count = 0;
        int *arr;
        
        scanf("%d", &person);

        arr = (int *)malloc(sizeof(int) * person);
        
        for(int j = 0; j < person; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }

        avg = (float)sum / (float)person;

        for(int j = 0; j < person; j++) {
            if(arr[j] > avg) count++;
        }

        countArr[i] = (float)count / (float)person * 100.0;
        free(arr);
    }

    for(int i = 0; i < N; i++) {
        printf("%.3f%%\n", countArr[i]);
    }

    return 0;
}