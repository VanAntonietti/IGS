#include "header.h"

int open(t_igs *igs)
{
	int		i;
	char	buffer[BUFFER_SIZE];
	// FILE	*file;
	int		file;

	file = open("arquivo.txt", O_RONLY);
	if(file == -1)
		return (0);
	{
		printf("Error opening file\n");
		return 1;
	}
	// i = 0;
	// while(fscanf(file, "%s\n", buffer) != EOF)
	// {
	// 	igs->pali[i] = buffer;
	// 	printf("%s\n", buffer);
	// 	printf("%s\n", igs->pali[i]);
	// 	i++;
	// }
	close(file);
	return 0;
}

int main(void)
{
	t_igs igs;

	open(&igs);
	return 0;
}