#include "../common_library/system.h"
#include "../common_library/utils.h"



void selection_sort(unsigned size, int *list)
{
	for(unsigned outer_index=0; outer_index != (size -1); ++outer_index)
	{
		int smaller_index = outer_index;
		
		for(unsigned inner_index = outer_index + 1; inner_index != size; ++inner_index)
		{
			if(list[smaller_index] > list[inner_index])
			{
				smaller_index = inner_index;
			}
		}
		
		swap(&list[outer_index] , &list[smaller_index]);
	}	
}

int main(int argc,char **argv)
{
	if(argc == 1)
	{
		printf("Usage : selection_sort [list to sort]\n");
		return EXIT_FAILURE;
	}
	int size = argc-1;
	int *list = (int *) malloc(sizeof(int)*size);
	
	for(int i=0; i!=size; ++i)
	{
		list[i] = atoi(argv[i+1]);
	}
	
	selection_sort(size, list);
	print_int_list(size,list);
	
	return EXIT_SUCCESS;

}
