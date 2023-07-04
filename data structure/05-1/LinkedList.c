#include "LinkedList.h"
#include "employee_data.h"
#include "stdio.h"
#include "stdlib.h"

Node *add_data(int data_num,char *data_name){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data->num = data_num;
    newNode->data->name = data_name;
    return newNode;
}

void ListInit(List *plist){
    plist -> tail = (Node*)malloc(sizeof(Node));
    plist->tail->next=NULL;

    plist -> cur = NULL;
    plist -> before = NULL;
    plist->numOf = 0;
}

void add_list(List *plist,Node *pNode){
    pNode->next=plist->tail;
    plist->tail->next=pNode;
    plist->tail->data=pNode->data;
    
    plist->numOf++;

}

void showyourlist(List *plist){
    plist->cur=plist->tail->next;

    while(1){
        if(plist->cur == NULL){
            continue;
        }
        printf("%d %s\n",plist->cur->data->num,plist->cur->data->name);
        plist->cur=plist->tail->next;

        if(plist->cur==NULL){
            break;
        }
    }
}