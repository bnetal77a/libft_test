/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:27:06 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/25 14:15:04 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_str;
	size_t	len_find;

	len_str = ft_strlen(haystack);
	len_find = ft_strlen(needle);
	i = 0;
	if (len_find == 0)
		return ((char *)haystack);
	while (i <= len_str - len_find && i < len)
	{
		if (ft_strncmp(haystack + i, needle, len_find) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return ((char *) NULL);
}
