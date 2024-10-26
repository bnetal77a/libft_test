/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:00:14 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/24 09:30:16 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (s1[j])
		j++;
	i = 0;
	while (s2[i] && i < n)
	{
		s1[j] = s2[i];
		j++;
		i++;
	}
	s1[j] = '\0';
	return (s1);
}
