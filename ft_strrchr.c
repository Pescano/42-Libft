/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:54:08 by paescano          #+#    #+#             */
/*   Updated: 2022/09/25 13:03:51 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	i = 0;
	a = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			a = (char *)s + i;
		i++;
	}
	if (s[i] == (char)c)
		a = (char *)s + i;
	return (a);
}
