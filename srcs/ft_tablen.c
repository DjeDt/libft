
#include "libft.h"

int		ft_tablen(char **tab)
{
	int count;

	count = 0;
	if (tab == NULL)
		return (0);
	while (tab[count] != NULL)
		count++;
	return (count);
}
