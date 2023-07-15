#include "linked_table.h"
#include <stdatomic.h>
#include <stddef.h>

SingleLinkedTable
InitSingleLinkedTable(void)
{
	SingleLinkedTable l;
	l        = malloc(sizeof(SingleLinkedTable));
	l->next  = NULL;
	l->value = 0;
	return l;
}