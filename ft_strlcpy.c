/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:59:35 by paescano          #+#    #+#             */
/*   Updated: 2022/10/02 11:47:40 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i[2];

	i[0] = ft_strlen(src);
	if (dst && size)
	{
		i[1] = 0;
		while ((i[1] < i[0]) && i[1] < (size - 1))
		{	
			dst[i[1]] = src[i[1]];
			i[1]++;
		}
		dst[i[1]] = '\0';
	}
	return (i[0]);
}
