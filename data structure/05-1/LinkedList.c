#include "LinkedList.h"
#include "employee_data.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void ListInit(List *plist){
    plist -> tail = NULL;
    plist -> cur = NULL;
    plist -> before = NULL;
    plist -> numOf = 0;
}
void add_data(List *plist,int data_num,char *data_name)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data->num = data_num;
    newNode->data->name = data_name;
    add_list(plist,newNode);
}
void add_list(List *plist,Node *pNode){
    if(plist->numOf == 0){
        plist -> tail = pNode;
        plist -> tail -> next = pNode;
        }
    else{
        pNode->next = plist->tail->next;
        plist->tail->next = pNode;
        plist->tail = pNode;
    }
    plist->numOf++;
}
int LFirst(List *plist,char *dname){
    while(1){
        if(plist->cur->data->name == dname){
            break;
        }
        else{
            LNext(plist);
        }
    }
    return true;
}
int LNext(List *plist){
    plist->before = plist->cur;
    plist->cur= plist->cur->next;
    if(plist->cur == NULL){
        plist->before = plist->cur;
        plist->cur= plist->cur->next;
    }
    return true;
}
void Next_dangik(List *plist,char *dname,int dnum){
    int i=0;
    LFirst(plist,dname);
    while(1){
        if(i == dnum){
            showyourinfo(plist);
            break;
        }  
        else{
            LNext(plist);
            i++;
        }
    }
}
void showyourinfo(List *plist){
    printf("당직 이름 : %s \n",plist->cur->data->name);
    printf("당직 사번 : %d \n",plist->cur->data->num);
}