#include "system.h"
#include "utils.h"

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print_int_list(int *size, int *list)
{
	printf("\n\n");

	for(int i=0; i!=size; ++i)
	{
		printf("%d ",list[i]);
	}

	printf("\n");	Î
}
