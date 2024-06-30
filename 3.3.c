#include <stdio.h>
int main() {
	int i, j, k; //a,b,c
	for (i = 1; i <= 3; i++) {
		if (i != 1) {
			printf("1队3号对2队%d号\n", i);
		}
	}
	for (j = 1; j <= 3; j++) {
		printf("1队2号对2队%d号\n", j);
	}
	for (k = 1; k <= 3; k++) {
		if (k != 1 && k != 3) {
			printf("1队3号对2队%d号\n2021440877郑欣宇", k);
		}
	}
	return 0;
}
