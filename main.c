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
			
			case 'a':printf("将栈初始化\n");//栈初始化操作
				if (initLStack(&s))
				{
					printf("初始化成功\n");
				}
				else 
				{
					printf("初始化失败\n");
				}
				print();
				printf("\n");
				break;
			case'b':if(isEmptyLStack(&s))     //判断是否为空栈
						printf("不是空栈");
				else printf("是空栈");
				print();
				printf("\n");
				break;
			case'c':getTopLStack(&s,e);//得到栈顶的值
				printf("%d",e);
				print();
				printf("\n");
				break;
			case'd':if(clearLStack(&s))//清空栈
						printf("清空成功");
				else
					printf("清空失败");
				print();
				printf("\n");
				break;
			case'e':if(destroyLStack(&s))//销毁栈
						printf("销毁成功");
				else
					printf("销毁失败");
				print();
				printf("\n");
				break;
			case'f':LStackLength(&s,data);//求栈的长度
				printf("%d",data);
				print();
				cprintf("\n");
				break;
			case'g':printf("请输入要入栈的元素");//入栈
				scanf("%d",data);
				if(pushLStack(&s,data))
					printf("入栈成功");
				else
					printf("入栈失败");
				print();
				printf("\n");
				break;
			case'h':if(popLStack(&s,data))//出栈
						printf("一个元素出栈成功");
				else printf("这是一个空栈");
				print();
				printf("\n");
				break;
			default: printf("非法输入");
				print();
			}
}
}
void print()
{
	printf("-------------------------------\n");
	printf(" 请输入对应字母来进行相关操作  \n");
	printf("-------------------------------\n");
	printf("a->栈初始化 b->判断链栈是否为空\n");
	printf("c->得到栈顶元素   d->清空栈    \n");
	printf("e->销毁栈        f->检测栈长度 \n");
	printf("g->输入元素入栈                \n");
	printf("h->使栈顶元素出栈              \n");
	printf("i->退出                        \n");
}







