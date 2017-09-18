#include "libft.h"

void	ft_putendl_col(const char *str, char *color)
{
	if (str)
	{
		ft_putstr(color);
		write(1, str, ft_strlen(str));
		write(1, "\n", 1);
		ft_putstr(END_COL);
	}
}
