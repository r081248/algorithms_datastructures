#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int count, int *array)
{
	for(int i=1; i<count; ++i)
	{
		int key = array[i];
		int j = i-1;
		
		while(j>=0 && array[j] > key)
		{
			array[j+1] = array[j];
			--j;
		}

		array[j+1] = key;
	}

	return;
}


int main(int argc,char **argv)
{
	if(argc == 1)
	{
		printf("Usage: insertion_sort [numbers to be sorted]\n");
		printf("Example\ninsertion_sort 10 2 9 3\n");
		return EXIT_FAILURE;
	}

	unsigned int count = argc-1;
	int *array = (int *) malloc(sizeof(int)*count);
	
	for(int i=1;i <= count; ++i)
	{
		array[i-1] = atoi(argv[i]);

	}

	insertion_sort(count, array);

	for(int i=0; i<count; ++i)
	{
		printf("%d ", array[i]);
	}

	printf("\n");

	return EXIT_SUCCESS;
}
