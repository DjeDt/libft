#include <unistd.h>

int	compare(char x, char y)
{
	if (x == '[' && y == ']')
		return (1);
	else if (x == '{' && y == '}')
		return (1);
	else if (x == '(' && y == ')')
		return (1);
	return (0);
}

int bracket(char *s)
{
	char stack[4096] = {0};
	char *pt = stack;

	while ((*s))
	{
		if ((*s) == '[' || (*s) == '{' || (*s) == '(')
		{
			pt++;
			*pt = *s;
		}
		else if ((*s) == ']' || (*s) == '}' || (*s) == ')')
		{
			if (compare((*pt), (*s)) == 0)
				return (0);
			*pt-- = 0;
		}
		s++;
	}
	if (pt == stack)
		return (1);
	return (0);
}

int	main(int argc ,char **argv)
{
	int count;

	if (argc > 1)
	{
		count = 1;
		while (argv[count++] != NULL)
		{
			if (bracket(argv[1]) == 1)
				write(1, "OK", 2);
			else
				write(1, "Error", 5);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
