#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
typedef struct student_info
{
	char m_StudentID[12];//ѧ��
	char m_Name[12];//����
	char m_Sex;//�Ա�,0-Ů,1��
	char m_KcName[51];//�γ�����ƿγ�����
	double m_Score;//�ɼ�
}STU_INFO;
void main()
{
	int compare(const void* a, const void *b);//�ȽϺ���ԭ��˵��
	STU_INFO students[10]={{"No001","���׸�",1,"C���Գ�����ƿγ����",85},
		{"No002","�����",0,"C���Գ�����ƿγ����",92},
		{"No003","������",0,"C���Գ�����ƿγ����",65}};
	int i;
	qsort(students,3,sizeof(STU_INFO),compare);
	//���
	for(i=0;i<3;i++)
		printf("%s\t%s\t%s\t%s\t%.2f\n",students[i].m_StudentID,students[i].m_Name,students[i].m_Sex==0?"Ů":"��",
			students[i].m_KcName,students[i].m_Score);
	printf("��1��13+13+1+52+4���ֽ�\n(2)�ṹ��\n��3������������\n(4)���շ���\n2021440877֣����");
	
}
int compare(const void* a, const void *b)//��������Ϊ��ʽ����
{
	STU_INFO* pstu1=(STU_INFO*)a;
	STU_INFO* pstu2=(STU_INFO*)b;
	return strcmp(pstu1->m_Name,pstu2->m_Name)>=0 ? 1 : -1;
}

