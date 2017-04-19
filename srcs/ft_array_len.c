
#include "libft.h"

size_t	ft_array_len(char **array)
{
	size_t count;

	count = 0;
	if (!array)
		return (0);
	while (array[count])
		count++;
	return (count);
}
