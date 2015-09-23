#include<stdlib.h>
#include"StackArray.h"

#define MinStackSize (5)
#define EmptyTOS (-1)

struct StackRecord
{
	int Capacity;
	int TopOfStack;
	ElementType *Array;
};

Stack CreatStack(int MaxElements)
{
	Stack S;
	if (MaxElements < MinStackSize)
		printf("Stack size is too small ");

	S = malloc(sizeof(struct StackRecord));
	if (S == NULL)
		printf("Out of space ");
	S->Array = malloc(sizeof(struct StackRecord)*MaxElements);
	if (S->Array == NULL)
		printf("Out of space ");
	S->Capacity = MaxElements;
	MakeEmpty(S);
	return S;
}

void Dispose(Stack S)
{
	if (S != NULL)
	{
		free(S->Array);
		free(S);
	}
}

int IsEmpty(Stack S)
{
	return S->TopOfStack == EmptyTOS;
}

void MakeEmpty(Stack S)
{
	S->TopOfStack = EmptyTOS;
}

void Push(ElementType X, Stack S)
{
	if (IsFull(S))
	{
		printf("Full stack ");
	}
	else
	{
		S->Array[++S->TopOfStack] = X;
		
	}
}

int IsFull(Stack S)
{
	return S->TopOfStack == S->Capacity - 1;
}


void Pop(Stack S)
{
	if (IsEmpty(S))
		printf("empty stack");
	else
		S->TopOfStack--;
}

ElementType Top(Stack S)
{
	if (!IsEmpty(S))
		return S->Array[S->TopOfStack];
	printf("empty stack");
	return 0;
}

ElementType TopAndPop(Stack S)
{
	if (!IsEmpty(S))
	{
		return S->Array[S->TopOfStack--];

	}
	else
		printf("empty stack");
	return 0;
}