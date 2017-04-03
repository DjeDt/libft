#include "libft.h"

void	ft_strreplace(char *old, char *new)
{
	if (old != NULL)
		free(old);
	old = ft_strdup(new);
}
