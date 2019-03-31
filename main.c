#include <stdio.h> 
#include "LinkStack.h"
#include <stdlib.h>
#include "LinkStack.c"
void main()
{ 
	void print();
	char choice;
	ElemType e,i,data;
	LinkStack s;
	print();
	while(1)
	{
		choice = getchar();
		while (getchar() != '\n')
				continue;
		if (choice == 'i')
			break;
		switch(choice)
		{
			
			case 'a':printf("��ջ��ʼ��\n");//ջ��ʼ������
				if (initLStack(&s))
				{
					printf("��ʼ���ɹ�\n");
				}
				else 
				{
					printf("��ʼ��ʧ��\n");
				}
				print();
				printf("\n");
				break;
			case'b':if(isEmptyLStack(&s))     //�ж��Ƿ�Ϊ��ջ
						printf("���ǿ�ջ");
				else printf("�ǿ�ջ");
				print();
				printf("\n");
				break;
			case'c':getTopLStack(&s,e);//�õ�ջ����ֵ
				printf("%d",e);
				print();
				printf("\n");
				break;
			case'd':if(clearLStack(&s))//���ջ
						printf("��ճɹ�");
				else
					printf("���ʧ��");
				print();
				printf("\n");
				break;
			case'e':if(destroyLStack(&s))//����ջ
						printf("���ٳɹ�");
				else
					printf("����ʧ��");
				print();
				printf("\n");
				break;
			case'f':LStackLength(&s,data);//��ջ�ĳ���
				printf("%d",data);
				print();
				cprintf("\n");
				break;
			case'g':printf("������Ҫ��ջ��Ԫ��");//��ջ
				scanf("%d",data);
				if(pushLStack(&s,data))
					printf("��ջ�ɹ�");
				else
					printf("��ջʧ��");
				print();
				printf("\n");
				break;
			case'h':if(popLStack(&s,data))//��ջ
						printf("һ��Ԫ�س�ջ�ɹ�");
				else printf("����һ����ջ");
				print();
				printf("\n");
				break;
			default: printf("�Ƿ�����");
				print();
			}
}
}
void print()
{
	printf("-------------------------------\n");
	printf(" �������Ӧ��ĸ��������ز���  \n");
	printf("-------------------------------\n");
	printf("a->ջ��ʼ�� b->�ж���ջ�Ƿ�Ϊ��\n");
	printf("c->�õ�ջ��Ԫ��   d->���ջ    \n");
	printf("e->����ջ        f->���ջ���� \n");
	printf("g->����Ԫ����ջ                \n");
	printf("h->ʹջ��Ԫ�س�ջ              \n");
	printf("i->�˳�                        \n");
}







