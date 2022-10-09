/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:47:26 by paescano          #+#    #+#             */
/*   Updated: 2022/09/25 12:14:56 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i[4];

	i[0] = ft_strlen(dst);
	i[1] = ft_strlen(src);
	i[2] = i[0];
	i[3] = 0;
	if (size == 0)
		return (i[1]);
	if (size < i[0])
		return (i[1] + size);
	while (src[i[3]] && (i[0] + i[3]) < size)
	{
		dst[i[2]] = src[i[3]];
		i[2]++;
		i[3]++;
	}
	if ((i[0] + i[3]) == size && i[0] < size)
		dst[i[2] - 1] = '\0';
	else
		dst[i[2]] = '\0';
	return (i[0] + i[1]);
}
