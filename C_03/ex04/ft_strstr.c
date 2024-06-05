/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:55:48 by aalbrech          #+#    #+#             */
/*   Updated: 2024/02/26 15:23:25 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (to_find[j] != '\0')
		{
			if (str[i] == to_find[j])
				j++;
			else
			{
				j = 0;
			}
		}
		if (j == ft_strlen(to_find))
			return (&str[i - ft_strlen(to_find) + 1]);
		i++;
	}
	return (0);
}
