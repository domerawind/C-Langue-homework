#include <stdio.h>
int main() {
	int i, j, k; //a,b,c
	for (i = 1; i <= 3; i++) {
		if (i != 1) {
			printf("1��3�Ŷ�2��%d��\n", i);
		}
	}
	for (j = 1; j <= 3; j++) {
		printf("1��2�Ŷ�2��%d��\n", j);
	}
	for (k = 1; k <= 3; k++) {
		if (k != 1 && k != 3) {
			printf("1��3�Ŷ�2��%d��\n2021440877֣����", k);
		}
	}
	return 0;
}
