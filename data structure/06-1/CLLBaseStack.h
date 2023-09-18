#ifndef __C_LINKEDBASE_STACK_H__
#define __C_LINKEDBASE_STACK_H__

#define TRUE 1
#define FALSE 0

#include "CLinkedList.h"

typedef struct _listStack{
    List *plist;
}ListStack;

typedef ListStack stack;
void stackinit(stack *pstack);
int isempty(stack *pstack);

void sinsert(stack *pstack, Data *pdata); // 넣는다
Data spop(stack *pstack); // 뺀다
Data speek(stack *pstack); // 검색한다

#endif