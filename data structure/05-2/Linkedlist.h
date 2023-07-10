#ifndef __CRT__LINKEDLIST__H__
#define __CRT__LINKEDLIST__H__
#define true 1
#define false 0

typedef int Data;

typedef struct _node{
    Data data;
    struct _node *next;
    struct _node *prev;
}Node;

typedef struct _dbDLinkedList
{
    Node *head;
    Node *tail;
    Node *cur;
    int numOfData;
}DBLinkedList;

typedef DBLinkedList List;

void ListInit(List *plist);
void LInsert(List *plist,Data data); // 꼬리에 노드를 추가한다

int LFirst(List *plist, Data pdata);
int LNext(List *plist,Data *pdata);

Data LRemove(List *plist); //앞서 참조가 이뤄진 노드를 삭제
int LCount(List *plist);

#endif