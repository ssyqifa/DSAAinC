#include <stdlib.h>
#include "List.h"

using namespace std;
void DeleteList(List L)
{
	Position P, tmp;
	
	P = L->Next;
	L->Next = NULL;
	while (P != NULL)
	{
		tmp = P->Next;
		free(P);
		P = tmp;
	}
}
