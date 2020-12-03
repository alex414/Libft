/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <adiaz-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 09:40:47 by adiaz-do          #+#    #+#             */
/*   Updated: 2020/01/13 10:45:03 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*str;
	size_t	toret;

	if (!(str = ft_memchr(dst, '\0', size)))
		return (size + ft_strlen(src));
	toret = (size_t)(str - dst) + ft_strlen(src);
	while ((size_t)(str - dst) < size - 1 && *src)
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	return (toret);
}
