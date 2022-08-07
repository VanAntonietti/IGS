#include "header.h"
void swap(int	*n, int *n_next)
{
	int	temp;

	temp = *n;
	*n = *n_next;
	*n_next = temp;
}

void bubbleSort(int n[], int size)
{
	int	i;
	int	j;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (n[j] > n[j + 1])
				swap(&n[j], &n[j + 1]);
}

struct ListNode *mergeKListas(struct ListNode **listas, int listasSize)
{
	int			i;
	int			j;
	int			k;
	int			size;
	int			counter;
	t_ListNode	*mergedList;
	t_ListNode	**tmp;
	
	tmp = listas;
	i = 0;
	size = 0;
	counter = 0;
	while(i < listasSize)
	{
		size += tmp[i]->size;
		i++;
	}
	mergedList = (t_ListNode *)malloc(sizeof(t_ListNode));
	mergedList->n = malloc(sizeof(int) * size);
	mergedList->size = size;
	mergedList->next = NULL;
	if(size == 0)
		return (mergedList);
	i = 0;
	j = 0;
	k = 0;
	while(counter < size)
	{
		while(j < listasSize)
		{
			if(k < tmp[j]->size)
			{
				mergedList->n[counter] = tmp[j]->n[k];
				counter++;
				k++;
			}
			else
			{
				j++;
				k = 0;
			}
		}
	}
	bubbleSort(mergedList->n, size);
	i = 0;
	while(i < size)
	{
		printf("%d\n", mergedList->n[i]);
		i++;
	}
	return (mergedList);
}

/**
 * tmp[0]->n[0] = 1;
 * tmp[0]->n[1] = 3;
 * tmp[0]->n[2] = 8;
 * tmp[1]->n[0] = 1;
 * tmp[1]->n[1] = 3;
 * tmp[1]->n[2] = 6;
 * tmp[2]->n[0] = 8;
 * tmp[2]->n[1] = 9;
 */