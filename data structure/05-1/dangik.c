#include <stdio.h>
#include <stdlib.h>
#include "employee_data.h"
#include "LinkedList.h"

int main(void)
{
    List *first = (List*)malloc(sizeof(List));
    Node *a = add_data(1111,"첫번째");
    Node *b = add_data(2222,"두번째");
    Node *c = add_data(3333,"세번째");
    Node *d = add_data(4444,"네번째");

    ListInit(first);
    add_list(first,a);
    add_list(first,b);
    add_list(first,c);
    add_list(first,d);
    
    showyourlist(first);

    free(a);
    free(b);
    free(c);
    free(d);

    free(first);
}