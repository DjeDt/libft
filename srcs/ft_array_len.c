
#include "libft.h"

size_t	ft_array_len(const char **array)
{
	size_t count;

	count = 0;
	if (!array)
		return (0);
	while (array[count] != NULL)
		count++;
	return (count);
}
