/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:48:02 by aalbrech          #+#    #+#             */
/*   Updated: 2024/02/29 15:47:19 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb > 0)
	{
		while (x * x <= nb)
		{
			if (nb == x * x)
				return (x);
			if (x > 46340)
				return (0);
			x++;
		}
	}
	return (0);
}
