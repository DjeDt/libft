#include "libft.h"

void	ft_putstr_col(const char *str, char *color)
{
	if (str)
	{
		write(1, color, ft_strlen(color));
		write(1, str, ft_strlen(str));
		write(1, END_COL, ft_strlen(END_COL));
	}
}
