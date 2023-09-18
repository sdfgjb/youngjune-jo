#include <stdio.h>
#include "CLLBaseStack.h"

int main(void)
{
	stack Stack;
	stackinit(&Stack);

	sinsert(&Stack, 1);  sinsert(&Stack, 2);
	sinsert(&Stack, 3);  sinsert(&Stack, 4);
	sinsert(&Stack, 5);

	
	while(isempty(&Stack))
		printf("%d ", spop(&Stack)); 

	return 0;
}