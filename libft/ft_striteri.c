/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:43:11 by paescano          #+#    #+#             */
/*   Updated: 2022/10/02 10:49:18 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			i;
	unsigned int	n;

	n = 0;
	if (s)
	{
		i = ft_strlen(s);
		while (n < i)
		{
			(*f)(n, s);
			s++;
			n++;
		}
	}
}
