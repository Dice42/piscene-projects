	#include <unistd.h>
	#include "ft_stock_str.h"

struct	s_stock_str *ft_strs_to_tab(int ac, char **av);
int		ft_strlen(char *str);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)1
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	main(int ac, char **av)
{
	int		i = 0;
	struct	s_stock_str *strut;
	// int		size;
	// char	*str;
	// char	*copy;

	strut = ft_strs_to_tab(ac, av);
	while (i < ac)
	{
		write(1, strut[i].str, ft_strlen(strut[i].str));
		write(1, "\n", 1);
		ft_putnbr(strut[i].size);
		write(1, "\n", 1);
		write(1, strut[i].copy, ft_strlen(strut[i].copy));
		write(1, "\n", 1);
		i++;
	}
}
