/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:27:24 by aalbrech          #+#    #+#             */
/*   Updated: 2024/02/26 13:31:31 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;
	int	result;

	result = 1;
	num = 1;
	if (nb < 0)
		return (0);
	while (num <= nb)
	{
		result = result * num;
		num++;
	}
	return (result);
}
