char str[6][20]={"Chongqing","Shanghai","Tianjing","Beijing","����Ƽ�ѧԺ","�������̼����Զ���"};
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
int compare(const void* a, const void *b)//��������Ϊ��ʽ����
{
	char* pstr1=(char*)a;
	char* pstr2=(char*)b;
	return strcmp(pstr1,pstr2)>=0 ? 1 : -1;
}
int main ()
{
	int n;
	char str[6][20]={"Chongqing","Shanghai","Tianjing","Beijing","����Ƽ�ѧԺ","�Ϻ�������ѧ"};
	qsort(str, 6, 20, compare); 
	for (n=0; n<6; n++)
		printf ("%s\n",str[n]);
	printf("\n2021440877֣����");
	return 0;
}

