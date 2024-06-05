/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:55:56 by aalbrech          #+#    #+#             */
/*   Updated: 2024/02/29 16:25:48 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	number;
	int	extra;

	extra = nb;
	number = 1;
	if (nb < 2)
		return (0);
	if ((nb % 2 == 0) && (nb != 2))
		return (0);
	while (number < 10000)
	{
		extra = nb % number;
		if ((extra == 0) && (number != nb && number != 1))
			return (0);
		extra = nb;
		number++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
