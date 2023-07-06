#include "LinkedList.h"
#include "employee_data.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
//* 리스트 처음 추가 *//
void ListInit(List *plist){
    plist -> tail = NULL;
    plist -> cur = NULL;
    plist -> before = NULL;
    plist -> numOf = 0;
}
//* 데이터 추가 **//
void add_data(List *plist,int data_num,char *data_name)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    create_data(newNode,data_num,data_name);
    add_list(plist,newNode);
    
}
void add_list(List *plist,Node *pNode){
    if(plist->numOf == 0){
        pNode->next = pNode;
        plist -> tail = pNode;
        //plist -> tail -> next = pNode;
        LFirst(plist);
        }
    else{
        pNode->next = plist->tail->next;
        plist->tail->next = pNode;
        plist->tail = pNode;
    }
    (plist->numOf)++;
    
}
int LFirst(List *plist){
    if(plist->tail == NULL)
        return false;
    plist->before = plist->tail;
    plist->cur= plist-> tail -> next;

    return true;
}
int LNext(List *plist){

    if(plist->numOf == 0)
        return false;
    plist->before= plist->cur;
    plist->cur = plist->cur->next;

    return true;
}
//* 찾고자 하는 대상을 찾는 함수 *//
int LSearch(List *plist, char *dname){
    if(LFirst(plist)){
        
        for (int i = 0; i<plist->numOf; i ++){
            if(plist->cur->data->name == dname){
                return true;
            }
            else{
                LNext(plist);
            }
        }
    }
    return false;
}
int Next_dangik(List *plist,char *dname, int dnum){
    int i =0;
    if(LSearch(plist,dname)){
        
        while(i < dnum){
            LNext(plist);
            i++;
        }
        showyourinfo(plist);
        return true;
    }
    else{
        return false;
    }
}
void showyourinfo(List *plist){
    printf("당직 이름 : %s \n",plist->cur->data->name);
    printf("당직 사번 : %d \n",plist->cur->data->num);
}
void LRemove(List* plist) {
    Node* rpos = plist->cur;

    if (rpos == plist->tail) {
        if (plist->tail == plist->tail->next)
            plist->tail = NULL;
        else
            plist->tail = plist->before;
    }
    plist->before->next = plist->cur->next;
    plist->cur = plist->before;

    free(rpos);
    (plist->numOf)--;
}