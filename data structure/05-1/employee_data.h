#ifndef __C_EMPLOYEE_DATA_H__
#define __C_EMPLOYEE_DATA_H__

#include "LinkedList.h"

#define true 1
#define false 0

typedef struct _data{
    int num;
    char *name;
}Edata;

void create_data(Node *pdata,int dnum,char *dname);
#endif