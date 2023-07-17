#include "LinkedList.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void ListInit(List*plist){
    plist->head = (Node*)malloc(sizeof(Node));
    plist->tail = (Node*)malloc(sizeof(Node));
    plist->head->next = plist->tail;
    plist->head->prev = NULL;
    plist->tail->next = NULL;
    plist->tail->prev = plist->head;
    plist->numOfData = 0;
}

void LInsert(List *plist,Data pdata){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = pdata;
    newNode->next = plist->tail;
    //newNode -> next = plist->tail->prev->next;
    plist->tail->next = newNode;

    newNode->prev = plist->tail->prev;
    plist->tail->prev->next = newNode;
    
    (plist->numOfData)++;
}

int LFirst(List *plist, Data *pdata){
    if(plist->head->next == plist -> tail)
        return false;

    plist->cur = plist->head->next;
    *pdata=plist->cur->data;
    return true;
}