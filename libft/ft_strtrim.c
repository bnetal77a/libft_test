/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:11:52 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/24 09:38:45 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (s1[i++])
	{
		if (s1[i] == set[0])
			count++;
	}
	str = (char *)malloc(sizeof(char) * (i - count) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] == set[0])
		i++;
	j = 0;
	while (s1[i] && s1[i] != set[0])
	{
		str[j++] = s1[i];
		i++;
	}
	return (str);
}
