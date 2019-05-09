#include "../common_library/system.h"
#include "../common_library/utils.h"


void insert(int *list, int loc)
{
	int prev = loc-1;

	while(prev>=0 && list[prev] > list[prev+1])
	{
		swap(list+prev, list+prev+1);

		--prev;
	}
}


void insertion_sort(int *list, int loc)
{
	if(loc>0)
	{
		insertion_sort(list, loc-1);
		insert(list, loc);
	}
}


int main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("Usage: insertion_sort [list to be sorted]");
		return EXIT_FAILURE;
	}

	int size = argc -1;

	int *list = (int *) malloc(sizeof(int) * size);

	for(int i=0; i!=size; ++i)
	{
		list[i] = atoi(argv[i+1]);
	}

	insertion_sort(list, size-1);
	print_int_list(size,list);

	return EXIT_SUCCESS;
}
