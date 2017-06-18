#include "libft.h"

void	malloc_error(const char *str, const int ret)
{
	ft_putstr_fd(str, 2);
	ft_putendl_fd(": malloc error, abort prog", 2);
	exit(ret);
}
