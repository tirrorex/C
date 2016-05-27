#include <stdlib.h>

static void		ft_itoa_putnbr(char *str, int pos, int n)
{
	if (n >= 10 || n <= -10)
	{
		if (n > 0)
			str[pos] = (n % 10) + '0';
		else
			str[pos] = -(n % 10) + '0';
		ft_itoa_putnbr(str, pos - 1, n / 10);
	}
	else
	{
		if (n > 0)
			str[pos] = n + '0';
		else
			str[pos] = -n + '0';
	}
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	i = n;
	len = 1;
	while (i /= 10)
		++len;
	str = (char*)malloc(sizeof(char) * (len + (n < 0 ? 2 : 1)));
	if (n < 0)
	{
		str[0] = '-';
		ft_itoa_putnbr(&str[1], len - 1, n);
	}
	else
		ft_itoa_putnbr(str, len - 1, n);
	if (n < 0)
		str[len + 1] = '\0';
	else
		str[len] = '\0';
	return (str);
}
