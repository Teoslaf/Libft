/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:47:00 by ttaneski          #+#    #+#             */
/*   Updated: 2022/12/12 14:47:23 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num_words(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != 32 && !(str[i] >= 9 && str[i] <= 13))
				i++;
			n++;
		}
	}
	return (n);
}

int	word_len(char *str, int i)
{
	int	c;

	c = 0;
	while (str[i] && str[i] != 32 && !(str[i] >= 9 && str[i] <= 13))
	{
		i++;
		c++;
	}
	return (c);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = (char **)malloc((num_words(str) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i, j = 0;
	while (str[i])
	{
		k = 0;
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i])
		{
			tab[j] = (char *)malloc((word_len(str, i) + 1) * sizeof(char));
			if (!tab[j])
				return (NULL);
			while (str[i] && str[i] != 32 && !(str[i] >= 9 && str[i] <= 13))
				tab[j][k++] = str[i++];
			tab[j][k] = '\0';
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

/* char **ft_split(char *str)
{
    char **words;
    int i = 0, j = 0, k = 0;

    words = (char **)malloc((num_words(str) + 1) * sizeof(char *));
    if (!words)
        return NULL;
    while (str[i])
    {
        while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
            i++;
        if (str[i])
        {
            words[j] = (char *)malloc((word_len(str, i) + 1) * sizeof(char));
            if (!words[j])
                return NULL;
            while (str[i] && str[i] != 32 && !(str[i] >= 9 && str[i] <= 13))
                words[j][k++] = str[i++];
            words[j][k] = '\0';
            j++;
            k = 0;
        }
    }
    words[j] = NULL;
    return words;
} */