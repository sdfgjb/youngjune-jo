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
    plist -> cur = NULL;
    plist -> before = NULL;
    plist -> tail = NULL;
    int numOf = 0;
}

void add_list(List *plist,Node *pNode){

}