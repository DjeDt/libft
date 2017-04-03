#include "libft.h"

char	**ft_tabjoin(char **base, char *add)
{
	int		count;
	char	**ret;

	if (!(ret = (char**)malloc(sizeof(char*) * ft_tablen(base) + 1)))
		return (NULL);
	count = -1;
	while (base[++count] != NULL)
		ret[count] = base[count];
	ret[count] = ft_strdup(add);
	ret[count + 1] = NULL;
	return (ret);
}
