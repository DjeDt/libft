# ifndef PRINT_H
# define PRINT_H

void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(const char *str);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int nb);
void				ft_putnbr_fd(int n, int fd);
void				ft_print_binary(unsigned int n);

#endif
