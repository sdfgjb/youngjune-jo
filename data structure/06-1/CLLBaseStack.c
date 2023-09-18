#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "CLinkedList.h"
#include "CLLBaseStack.h"

void stackinit(stack *pstack){
    pstack->plist = (List*)malloc(sizeof(List));
    ListInit(pstack->plist);
}

int isempty(stack *pstack){
    if (LCount(pstack->plist) == 0)
        return TRUE;
    else
        return FALSE;
}

void sinsert(stack *pstack, Data *pdata){
    LInsertFront(pstack->plist,pdata);
}
Data spop(stack *pstack){
    Data data;
    LFirst(pstack->plist,&data);
    LRemove(pstack->plist);
    return data;
}
Data speek(stack *pstack){
    Data data;
    LFirst(pstack->plist,&data);
    return data;
}