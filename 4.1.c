#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */
int compare(const void *a, const void *b)
{
	int *pa=(int*)a;//ǿ��ָ����������ת��.��������תΪint��
	int *pb=(int*)b;//ǿ��ָ����������ת��
	return pa[0] > pb[0] ? -1 : 1;
}
int main ()
{
	int n;
	int values[6]={90,80,10,30,50,70};
	qsort(values, 6,sizeof(int), compare); 
	for (n=0; n<6; n++)
		printf ("%6d",values[n]);
	printf("\n(1)valuesΪ������6Ϊ���鳤��\n(2)void *����ָ���κ����͵����ݣ�����ռ���ڴ�С\n(3)��ֵַ����ǿתΪ�������ͣ�������ַָ��ֵ����Ϊ�����������׳�����float����Ϊint,����ֱ�Ӹ�ֵ��ָ���ǲ����Եģ�����ǿתΪ�Ϸ���ַ�����������ڴ��ַ������ֵ����˸��������ݲ��ܳ�Ϊ�Ϸ���ַ\n 2021440877֣����");
	return 0;
}

