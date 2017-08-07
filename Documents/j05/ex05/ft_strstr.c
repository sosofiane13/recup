/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokhtar <smakhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:11:46 by smokhtar          #+#    #+#             */
/*   Updated: 2017/08/07 11:05:09 by smokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_comp(char *str,char *to_find, int i)
{
	while (to_find != '/0')
	{
		if (str[i] != to_find[i])
		{
			return (0);
		}
	}
	return (1);
}


void	*ft_strstr(char *str,char *to_find)
{
	int i;

	i=0
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i])
		{
			if (1 == ft_comp(*str, *to_find, i))
			{
				return(to_find);
			}
		}
		i++
	}
	return (0);
}
