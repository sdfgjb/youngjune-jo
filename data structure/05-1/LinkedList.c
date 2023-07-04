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

    plist->tail->next=plist->tail;

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
    
}
void Next_dangik(List *plist,char *dname,int dnum){
    int i;
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