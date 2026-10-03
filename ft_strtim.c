/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:26:21 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/03 13:05:24 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int len;
	int i;

	i = 0;
	len = 0;
	if (s1[len])
		len++;	
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len -= i;
	i = 0;
	while (ft_strrchr(set, s1[i]))
		i++;
	len -= i;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);

		// Faltaría lo de copiar en el str lo que nos interesa de s1...

		
// Primero ver que memoria tenemos que reservar en funcion de cuantos bytes
// vayamos a quitar de s1
// Luego hacemos la reserva de memoria y comprobamos que se haya hecho
// Después es cuando copiamos en el nuevo str lo que nos interesa de s1
	char	*ft_strchr(const char *s, int c);
// Busca la primera aparición del carácter c en la cadena s. 
// Devuelve un puntero a esa posición o NULL si no lo encuentra.
	char	*ft_strrchr(const char *s, int c);
// Busca la última aparición del carácter c en la cadena s. 
// Devuelve un puntero a esa posición o NULL si no existe.

}