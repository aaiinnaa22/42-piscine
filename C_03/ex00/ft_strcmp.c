/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:45:26 by aalbrech          #+#    #+#             */
/*   Updated: 2024/02/25 08:56:35 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	difference;

	i = 0;
	difference = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		difference = s1[i] - s2[i];
		if (difference != 0)
		{
			break ;
		}
		i++;
	}
	return (difference);
}
