#include <stdio.h>
int main()
{
	int s,a,b,c,d;         
	for(s='A';s<='D';s++) 
	{
		a=(s!='A');          
		b=(s=='C');         
		c=(s=='D');         
		d=(s!='D');        
		if((a+b+c+d)==3)   
		{
			printf("100分的同学是:%c\n2021440877 郑欣宇",s);
			break;
		}
	}
	return 0;
}
