/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:35:25 by aalbrech          #+#    #+#             */
/*   Updated: 2024/02/22 18:42:31 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	integer;
	int	plusminus;
	int	i;

	integer = 0;
	plusminus = 1;
	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			plusminus = plusminus * (-1);
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		integer = integer * 10 + (str[i] - 48);
		i++;
	}
	return (integer * plusminus);
}
