#include "libft.h"

int ft_mat_size(char **mat)
{
	int	size;

	size = 0;
	if (!mat || !*mat)
		return (0);
	while (mat[size] != NULL)
		size++;
	return (size);
}
