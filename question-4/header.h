#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 256

typedef struct ListNode {
	struct	ListNode *next;
	int		*n;
	int		size;
}			t_ListNode;

struct ListNode *mergeKListas(struct ListNode **listas, int listasSize);

#endif