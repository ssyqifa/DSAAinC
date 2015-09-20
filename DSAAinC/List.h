#ifndef _List_H

typedef double ElementType;

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(List L);

#endif
struct Node
{
	ElementType Element;
	Position Next;
};