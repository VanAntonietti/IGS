#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 256

typedef struct s_stack 
{
	struct 	s_stack	*next;
	char	*str;
	int		len;
}			t_stack;

typedef struct s_igs
{
	int		index;
	t_stack	*list;
}		t_igs;

void	get_palindrome(t_igs *igs);

#endif