/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbrech <aalbrech@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:17:51 by aalbrech          #+#    #+#             */
/*   Updated: 2024/02/26 14:57:46 by aalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				difference;

	i = 0;
	difference = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		difference = s1[i] - s2[i];
		if (difference != 0)
		{
			return (difference);
		}
		i++;
	}
	return (difference);
}
