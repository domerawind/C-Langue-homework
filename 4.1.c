#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */
int compare(const void *a, const void *b)
{
	int *pa=(int*)a;//强制指针数据类型转换.把无类型转为int型
	int *pb=(int*)b;//强制指针数据类型转换
	return pa[0] > pb[0] ? -1 : 1;
}
int main ()
{
	int n;
	int values[6]={90,80,10,30,50,70};
	qsort(values, 6,sizeof(int), compare); 
	for (n=0; n<6; n++)
		printf ("%6d",values[n]);
	printf("\n(1)values为分数，6为数组长度\n(2)void *可以指向任何类型的数据，并且占用内存小\n(3)地址值可以强转为其他类型，但将地址指向值解释为其他类型容易出错，如float解释为int,常量直接赋值给指针是不可以的，必须强转为合法地址，另外由于内存地址是整型值，因此浮点型数据不能成为合法地址\n 2021440877郑欣宇");
	return 0;
}

