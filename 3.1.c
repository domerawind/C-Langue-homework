#include<stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;					 
	for(a=1;a<=3;a++)		
		for(b=1;b<=3;b++)		
			for(c=1;c<=3;c++)
				if(a!=1 && c!=3 && c!=1 && a!=b && b!=c && a!=c)
	{
		printf("%c���޸�A\n",'X'+a-1);
		printf("%c���޸�B\n",'X'+b-1);
		printf("%c���޸�C\n",'X'+c-1);
		printf("\n");
		printf("%d���޸�A\n",a);
		printf("%d���޸�B\n",b);
		printf("%d���޸�C\n2021440877֣����",c);
	}
	system("pause");
	return 0;
}
