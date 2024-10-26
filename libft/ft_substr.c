/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:31:22 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/24 09:41:10 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			arr[j] = s[i];
			j++;
		}
		i++;
	}
	arr[j] = '\0';
	return (arr);
}
