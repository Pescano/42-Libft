/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:36:54 by paescano          #+#    #+#             */
/*   Updated: 2022/09/29 12:48:04 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	tsize;

	tsize = nmemb * size;
	ptr = malloc(tsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, tsize);
	return (ptr);
}
