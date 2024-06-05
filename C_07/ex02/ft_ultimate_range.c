/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:27:08 by aalbrech          #+#    #+#             */
/*   Updated: 2024/03/04 14:50:08 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	hey;
	int	i;

	i = 0;
	hey = min;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *) malloc(size * sizeof(int));
	if (arr == '\0')
		return (-1);
	while (hey < max)
	{
		arr[i] = hey;
		i++;
		hey++;
	}
	*range = arr;
	return (i);
}
