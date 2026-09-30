/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:28:35 by ncano-co          #+#    #+#             */
/*   Updated: 2026/09/30 17:41:15 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// En libft.h solo van las declaraciones (los prototipos) de las funciones, 
// los #include necesarios y la estructura del header guard para evitar 
// inclusiones dobles. No se escribe el código/comportamiento de la función aquí

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);

//Puede que tenga que añadir la librería que contiene el NULL... eso o cambiar todos los NULL que esté usando...
#endif
