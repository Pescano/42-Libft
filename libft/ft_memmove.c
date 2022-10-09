/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:06:22 by paescano          #+#    #+#             */
/*   Updated: 2022/09/24 18:31:00 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*odest;
	const char	*osrc;

	odest = (char *)dest;
	osrc = (const char *)src;
	if (!dest && !src)
		return (NULL);
	if (osrc > odest)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		n--;
		*(odest + n) = *(osrc + n);
	}
	return (dest);
}
