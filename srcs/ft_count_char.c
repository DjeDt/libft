#include "libft.h"

int		ft_count_char(const char *str, const char c)
{
	int ret;
	int count;

	ret = 0;
	count = -1;
	if (str == NULL)
		return (-1);
	while (str[++count] != '\0')
		str[count] == c ? ret++ : 0;
	return (ret);
}
