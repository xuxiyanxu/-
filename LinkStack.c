#include "LinkStack.h"
#include <stdlib.h>
#include <stdio.h>
//链栈(基于链表的)
Status initLStack(LinkStack *s)   //初始化
{
	s=(LinkStack*)malloc(sizeof(struct LinkStack));
	s->top=NULL;
	s->count=0;
	return SUCCESS;
}

Status isEmptyLStack(LinkStack *s)  //判断链栈是否为空
{
if (s->top)
{
return ERROR;//如果为空栈，返回0
}
else
{
return SUCCESS;//如果不是空栈，返回1
}
}
Status getTopLStack(LinkStack *s,ElemType *e)  //得到栈顶元素
{
if (!s->top)//判断是否为空栈，不是再取栈顶元素
{
	*e=s->top->data;
	return *e;
}
else 
{
printf("这是一个空栈\n");
return ERROR;
}
}

Status clearLStack(LinkStack *s)   //清空栈
{
while (s->top)//一直执行直到栈顶为空
{
LinkStackPtr p;
p=s->top;
s->top=s->top->next;//使指向栈顶元素的指针指向栈的顶部
s->count--;//减小栈的长度
free(p);
}
return SUCCESS;
}

Status destroyLStack(LinkStack *s)   //销毁栈
{
clearLStack(s);//先清空
free (s);//释放栈空间
return SUCCESS;
}

Status LStackLength(LinkStack *s,int *length)    //检测栈长度
{

	(*length)= s->count;
return *length;
}

Status pushLStack(LinkStack *s,ElemType data)   //入栈
{
LinkStackPtr p=(LinkStackPtr)malloc(sizeof(StackNode));
p->data=data;//新来的元素p数据为data
p->next=s->top;
s->top=p;
s->count++;
return SUCCESS;
}
Status popLStack(LinkStack *s,ElemType *data)   //出栈
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