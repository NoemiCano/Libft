/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:19:22 by ncano-co          #+#    #+#             */
/*   Updated: 2026/09/28 18:19:23 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size > 0)
	{
		while (src[j] != '\0' && j < (size -1))
		{
			dest[j] = src[j];
			j++;
		}
		while (j < size)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (i);
}
