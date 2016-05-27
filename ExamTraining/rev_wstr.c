#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		i = 0;
	int		j = 0;
	int		k = 0;
	tab = (char**)malloc(sizeof(char*) * (ft_strlen(str) + 1));
	tab[0] = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if (str[i] == ' ')
		{
			tab[j][k] = '\0';
			j++;
			k = 0;
			tab[j] = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
			i++;
		}
		else
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
	}
	tab[j][k] = '\0';
	j++;
	tab[j] = 0;
	return (tab);
}

int		ft_tablen(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	rev_printtab(char **tab)
{
	int		i;

	i = ft_tablen(tab);
	while (i-- > 0)
	{
		ft_putstr(tab[i]);
		if (i > 0)
			write(1, " ", 1);
	}
}

void	rev_wstr(char *str)
{
	char	**tab;

	tab = ft_split(str);
	rev_printtab(tab);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
