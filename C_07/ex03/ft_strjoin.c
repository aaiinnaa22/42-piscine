/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:26:29 by aalbrech          #+#    #+#             */
/*   Updated: 2024/03/04 14:24:13 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_minilen(char *spacesep)
{
	int	i;

	i = 0;
	while (spacesep[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlen2d(char **str, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		while (str[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_mallostr(int size, char **strs, char *sep)
{
	int		amount;
	int		space;
	char	*str;

	space = ft_minilen(sep);
	amount = (size * space) + ft_strlen2d(strs, size);
	if (size <= 0)
		amount = 0;
	str = (char *) malloc (((amount + 1) * sizeof(char)));
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		w;
	char	*str;

	str = ft_mallostr(size, strs, sep);
	w = 0;
	i = -1;
	if (size > 0)
	{
		while (++i < size)
		{
			j = 0;
			while (strs[i][j] != '\0')
				str[w++] = strs[i][j++];
			j = 0;
			while (sep[j] != '\0' && i < size - 1)
				str[w++] = sep[j++];
		}
	}
	str[w] = '\0';
	return (str);
}
