#include <stdio.h>

int main() {
	int N;
	scanf("%d ", &N);

	int sum = 0;
	while (N--) {
		char letter;
		scanf("%c", &letter);
		sum += letter - '0';
	}

	printf("%d\n", sum);

	return 0;
}