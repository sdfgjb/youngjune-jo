#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "employee_data.h"
#include "stdlib.h"
#include "string.h"


void create_data(Node *pnode, int dnum, char *dname){
    Edata* new_data;
    new_data= (Edata*)malloc(sizeof(Edata));
    new_data->num = dnum;
    new_data->name= dname;
    
    pnode->data = new_data;
}