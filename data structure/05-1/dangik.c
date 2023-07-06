#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee_data.h"
#include "LinkedList.h"

int main(void)
{
    List *first = (List*)malloc(sizeof(List));
    ListInit(first);
    
    add_data(first,1111,"첫번째");
    add_data(first,2222,"두번째");
    add_data(first,3333,"세번째");
    add_data(first,4444,"네번째");
    Next_dangik(first, "세번째", 1);
    /*
    LRemove(first);
    LRemove(first);
    LRemove(first);
    LRemove(first);
    */
}