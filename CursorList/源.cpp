#include "cursor.h"
#include <stdlib.h>
#define SpaceSize 100
struct Node
{
	ElementType Element;
	Position Next;
};
struct Node CursorSpace[SpaceSize];