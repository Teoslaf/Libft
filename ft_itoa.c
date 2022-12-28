#include "libft.h"

char *ft_itoa(int n)
{
	int i;
	char *str;
	int rem;

	if (!(str = (char *)malloc(n * (sizeof(char *)))))
		return (NULL);
	else
	{
		if (n == 0)
			str[i++] = '0';
		if (n < 0)
		{
			str[0] = '-';
			n = n * -1;
		}
		while (n != 0)
		{
			rem = n % 10;
			str[i++] = rem + '0';
			n /= 10;
		}
		str[i] = '\0';
	}
	return (str);
}

int main()
{
	printf("%s", ft_itoa(-10));
}
