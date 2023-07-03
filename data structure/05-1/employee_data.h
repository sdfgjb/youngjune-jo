#ifndef __C_EMPLOYEE_DATA_H__
#define __C_EMPLOYEE_DATA_H__

#define true 1
#define false 0

typedef struct _data{
    int num;
    char *name;
}Edata;
 
Edata dangik_info(int num, char * name);

#endif