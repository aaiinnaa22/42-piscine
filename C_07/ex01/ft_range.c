/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:25:23 by aalbrech          #+#    #+#             */
/*   Updated: 2024/02/29 18:57:34 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	hey;
	int	i;

	hey = min;
	size = (max - min);
	i = 0;
	if (min >= max)
		return (0);
	arr = (int *) malloc(size * sizeof(int));
	while (hey < max)
	{
		arr[i] = hey;
		i++;
		hey++;
	}
	arr[i] = '\0';
	return (arr);
}
