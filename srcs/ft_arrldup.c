#include "libft.h"

char	**ft_arrldup(const char **arr, size_t max)
{
	size_t	count;
	char	**ret;

	count = 0;
	ret = NULL;
	if (ft_arrlen(arr) < max)
		ret = (char**)malloc(sizeof(char*) * ft_arrlen(arr) + 1);
	else
		ret = (char**)malloc(sizeof(char*) * max + 1);
	if (ret == NULL)
		ft_putendl("malloc_error");
	while ((arr[count] != NULL) && (count < max))
	{
		ret[count] = ft_strdup(arr[count]);
		count++;
	}
	ret[count] = NULL;
	return (ret);
}
