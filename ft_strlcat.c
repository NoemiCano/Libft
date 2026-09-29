/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:01:51 by ncano-co          #+#    #+#             */
/*   Updated: 2026/09/29 18:01:53 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{

	// Hay que añadir el byte nulo siempre que haya almenos n byte libre en dst
	// Tanto src como dst deben terminar con un byte nulo
	// añade la cadena src (que termina en nulo) al final de dst. Añadira como máximo size -strlen(dst) -1 bytes asegurando que el resultado termine con un caracter nulo

	unsigned int	length;
	unsigned int	i;

	length = 0;
	i = 0;
	while (dst[length] != '\0')
	{
		length++;
	}
	if (size > 0)
	{
		while (src[i] && (i < (size - 1)))
		{
			dst[length] = src[i];
			i++;
			length++;
		}
	}
	dst[length] = '\0';
	return (length);
}
