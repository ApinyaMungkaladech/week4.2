#include<stdio.h>
int main() {
	int n[10];
	float x = 0;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &n[i]);
		printf("%d ",n[i]);
		x = x + n[i];
	}
	printf("\n%.3f", x/10);


}