#include"Stack.h"
#include <stdlib.h>
#include<stdio.h>
void main()
{
	Stack S=CreatStack();
	MakeEmpty(S);
	Pop(S);
	Push(1.2, S);
	printf("%f", Top(S));

}