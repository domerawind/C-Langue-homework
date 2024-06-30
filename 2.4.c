#include <stdio.h>

int main()
{
	int i, n=20, t1 = 0, t2 = 1, nextTerm;
	printf("ì³²¨ÄÇÆõÊıÁĞ: ");
	
	for (i = 1; i <= n; ++i)
	{
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("2021440877Ö£ĞÀÓî");
	return 0;
}
