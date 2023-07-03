#ifndef __C_LINKEDLIST_H__
#define __C_LINKEDLIST_H__

#include "employee_data.h"

typedef struct _node
{
    struct Edata *data;
    struct Node *next;
}Node;

typedef struct _list{
    Node *cur;
    Node *before;
    Node *tail;
    int numOf;

}List;
Node add_data(int num, char *name);

void ListInit(List *plist);
void add_list(List *plist, Node *pNode);

void LNext(List *plist);

#endif