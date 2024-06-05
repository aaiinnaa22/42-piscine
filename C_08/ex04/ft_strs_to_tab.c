/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:55:10 by aalbrech          #+#    #+#             */
/*   Updated: 2024/03/06 15:12:22 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strcpy(char *str)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = (char *) malloc (ft_strlen(str) + 1);
	if (cpy == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*hylla;
	int			i;

	i = 0;
	hylla = (t_stock_str *) malloc (sizeof(t_stock_str) * (ac + 1));
	if (hylla == NULL)
		return (NULL);
	while (i < ac)
	{
		hylla[i].size = ft_strlen(av[i]);
		hylla[i].str = av[i];
		hylla[i].copy = ft_strcpy(av[i]);
		i++;
	}
	hylla[i].size = 0;
	hylla[i].str = 0;
	hylla[i].copy = 0;
	return (hylla);
}
