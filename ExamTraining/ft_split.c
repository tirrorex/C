#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*epur_str(char *entry)
{
	char	*str;
	int		i;
	int		j;
	int		start;
	int		end;
	int		flag = 0;

	str = (char*)malloc(sizeof(char) * (ft_strlen(entry) + 1));
	start = 0;
	end = ft_strlen(entry) - 1;
	while (entry[start] && (entry[start] == ' '  || entry[start] == '\t' \
				|| entry[start] == '\n'))
	 	start++;
	while (entry[end] && (entry[end] == ' ' || entry[end] == '\t' \
				|| entry[end] == '\n'))
		end--;
	i = start;
	j = 0;
	while (entry[i] && i <= end)
	{
		if (entry[i] == ' ' || entry[i] == '\t' || entry[i] == '\n')
		{
			if (flag == 0)
			{
				str[j] = ' ';
				flag = 1;
				i++;
				j++;
			}
			else
				i++;
		}
		else
		{
			str[j] = entry[i];
			i++;
			j++;
			flag = 0;
		}
	}
	str[j] = '\0';
	return (str);
}
#include <stdio.h>
char		**ft_split(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = 0;
	if (str)
	{
		str = epur_str(str);
		//printf("%s\n", str);
		tab = (char**)malloc(sizeof(char*) * (ft_strlen(str) + 1));
		i = 0;
		j = 0;
		k = 0;
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
	}
	return (tab);
}


#include <stdio.h>

void		print_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

int			main(void)
{
	char		**tab;

	char str[] = "\t\n \t\n  yolo \t \n \t\n saasgh\t\n \t\nlala\t\n ";
	tab = ft_split(str);
	print_tab(tab);
	return (0);
}
