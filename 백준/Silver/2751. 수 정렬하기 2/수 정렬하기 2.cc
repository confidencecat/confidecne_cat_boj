#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int n, a[1000001];

int compare(const void* A, const void* B) {
	return *(int*)A - *(int*)B;
}

int main() {

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), compare);
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}