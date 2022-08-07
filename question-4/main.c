#include "header.h"

static void init_list(t_ListNode *NewList, int *array_n, int n)
{
	NewList->n = (int *)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++)
		NewList->n[i] = array_n[i];
	NewList->size = n;
}

int main(void)
{
	t_ListNode	*ListNode[3];
	t_ListNode	*mergedList;

	for(int i = 0; i < 3; i++)
	{
		ListNode[i] = (t_ListNode *)malloc(sizeof(t_ListNode));
		ListNode[i]->next = NULL;
	}
	init_list(ListNode[0], (int[]){1, 3, 8}, 3);
	init_list(ListNode[1], (int[]){1, 3, 6}, 3);
	init_list(ListNode[2], (int[]){8, 9}, 2);

	ListNode[0]->next = ListNode[1];
	ListNode[1]->next = ListNode[2];
	mergedList = mergeKListas(ListNode, 3);

	return (0);
}
