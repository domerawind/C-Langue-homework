char str[6][20]={"Chongqing","Shanghai","Tianjing","Beijing","重庆科技学院","电气工程及其自动化"};
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
int compare(const void* a, const void *b)//数组名作为形式参数
{
	char* pstr1=(char*)a;
	char* pstr2=(char*)b;
	return strcmp(pstr1,pstr2)>=0 ? 1 : -1;
}
int main ()
{
	int n;
	char str[6][20]={"Chongqing","Shanghai","Tianjing","Beijing","重庆科技学院","上海电力大学"};
	qsort(str, 6, 20, compare); 
	for (n=0; n<6; n++)
		printf ("%s\n",str[n]);
	printf("\n2021440877郑欣宇");
	return 0;
}

