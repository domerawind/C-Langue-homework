#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
typedef struct student_info
{
	char m_StudentID[12];//学号
	char m_Name[12];//姓名
	char m_Sex;//性别,0-女,1男
	char m_KcName[51];//课程序设计课程名称
	double m_Score;//成绩
}STU_INFO;
void main()
{
	int compare(const void* a, const void *b);//比较函数原型说明
	STU_INFO students[10]={{"No001","张首哥",1,"C语言程序设计课程设计",85},
		{"No002","李二娃",0,"C语言程序设计课程设计",92},
		{"No003","王幺妹",0,"C语言程序设计课程设计",65}};
	int i;
	qsort(students,3,sizeof(STU_INFO),compare);
	//输出
	for(i=0;i<3;i++)
		printf("%s\t%s\t%s\t%s\t%.2f\n",students[i].m_StudentID,students[i].m_Name,students[i].m_Sex==0?"女":"男",
			students[i].m_KcName,students[i].m_Score);
	printf("（1）13+13+1+52+4个字节\n(2)结构体\n（3）第三个参数\n(4)按照分数\n2021440877郑欣宇");
	
}
int compare(const void* a, const void *b)//数组名作为形式参数
{
	STU_INFO* pstu1=(STU_INFO*)a;
	STU_INFO* pstu2=(STU_INFO*)b;
	return strcmp(pstu1->m_Name,pstu2->m_Name)>=0 ? 1 : -1;
}

