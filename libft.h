/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:28:35 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/01 20:34:49 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// En libft.h solo van las declaraciones (los prototipos) de las funciones, 
// los #include necesarios y la estructura del header guard para evitar 
// inclusiones dobles. No se escribe el código/comportamiento de la función aquí

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

// Parte 1 - Funciones de libc
int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *s, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
