/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:13:03 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/21 18:44:46 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(s);
	dlen = ft_strlen(d);
	if (dstsize <= dlen)
		return (dstsize + slen);
	i = 0;
	j = dlen;
	while (s[i] && j < dstsize - 1)
	{
		d[j] = s[i];
		j++;
		i++;
	}
	d[j] = '\0';
	return (slen + dlen);
}
