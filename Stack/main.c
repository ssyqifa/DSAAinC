#include"Stack.h"
#include <stdlib.h>
#include<stdio.h>
void main()
{
	Stack S=CreatStack();
	MakeEmpty(S);
	Pop(S);
	printf("\n");
	Push(1.2, S);
	printf("push(1.2),top(s):%f\n", Top(S));
	Push(2, S);
	printf("push(2),top(s):%f\n", Top(S));
	Push(3, S);
	printf("push(3),top(s):%f\n", Top(S));
	Push(4.3, S);
	printf("push(4),top(s):%f\n", Top(S));
	Pop(S);
	printf("pop(s),top(s):%f\n", Top(S));
	Pop(S);
	printf("pop(s),top(s):%f\n", Top(S));

}