#include "LinkStack.h"
#include <stdlib.h>
#include <stdio.h>
//��ջ(���������)
Status initLStack(LinkStack *s)   //��ʼ��
{
	s=(LinkStack*)malloc(sizeof(struct LinkStack));
	s->top=NULL;
	s->count=0;
	return SUCCESS;
}

Status isEmptyLStack(LinkStack *s)  //�ж���ջ�Ƿ�Ϊ��
{
if (s->top)
{
return ERROR;//���Ϊ��ջ������0
}
else
{
return SUCCESS;//������ǿ�ջ������1
}
}
Status getTopLStack(LinkStack *s,ElemType *e)  //�õ�ջ��Ԫ��
{
if (!s->top)//�ж��Ƿ�Ϊ��ջ��������ȡջ��Ԫ��
{
	*e=s->top->data;
	return *e;
}
else 
{
printf("����һ����ջ\n");
return ERROR;
}
}

Status clearLStack(LinkStack *s)   //���ջ
{
while (s->top)//һֱִ��ֱ��ջ��Ϊ��
{
LinkStackPtr p;
p=s->top;
s->top=s->top->next;//ʹָ��ջ��Ԫ�ص�ָ��ָ��ջ�Ķ���
s->count--;//��Сջ�ĳ���
free(p);
}
return SUCCESS;
}

Status destroyLStack(LinkStack *s)   //����ջ
{
clearLStack(s);//�����
free (s);//�ͷ�ջ�ռ�
return SUCCESS;
}

Status LStackLength(LinkStack *s,int *length)    //���ջ����
{

	(*length)= s->count;
return *length;
}

Status pushLStack(LinkStack *s,ElemType data)   //��ջ
{
LinkStackPtr p=(LinkStackPtr)malloc(sizeof(StackNode));
p->data=data;//������Ԫ��p����Ϊdata
p->next=s->top;
s->top=p;
s->count++;
return SUCCESS;
}
Status popLStack(LinkStack *s,ElemType *data)   //��ջ
{
ElemType *e;
LinkStackPtr p;
if(getTopLStack(s,e))
return ERROR;
p=s->top;
s->top=s->top->next;
s->count--;
free(p);
return SUCCESS;
}