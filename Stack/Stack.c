/* Stack implementation is a linked list with a header*/
#include "Stack.h"
#include <stdlib.h>
#include<stdio.h>

struct Node
{
	ElementType Element;
	PtrToNode Next;
};

int IsEmpty(Stack S)
{
	return S->Next == NULL;
}

Stack CreatStack()
{
	Stack S;
	S = malloc(sizeof(struct Node));
	if (S == NULL)
		FatalError("Out of space!");
	S->Next = NULL;
	MakeEmpty(S);
	return S;
}

void MakeEmpty(Stack S)
{
	if (S == NULL)
		Error("Must use CreatStack first");
	else
		while (!IsEmpty(S))
		{
			Pop(S);
		}
}

void Push(ElementType X, Stack S)
{
	PtrToNode TmpCell;
	TmpCell = malloc(sizeof(struct Node));
	if (TmpCell  == NULL)
		FatalError("Out of Space£¡");
	else
	{
		TmpCell->Element = X;
		TmpCell->Next = S->Next;
		S->Next = TmpCell;
	}
}

void Pop(Stack S)
{
	PtrToNode FirstCell;
	if (IsEmpty(S))
		Error("Empty Stack");
	else
	{
		FirstCell = S->Next;
		S->Next = FirstCell->Next;
		free(FirstCell);
	}
}

ElementType Top(Stack S)
{
	if (!IsEmpty(S))
		return S->Next->Element ;
	else
	{
		Error("empty stack");
	}
}

//void FatalError(char* s)
//{
//	printf("%s\n", s);
//}