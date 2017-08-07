/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokhtar <smakhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:56:11 by smokhtar          #+#    #+#             */
/*   Updated: 2017/08/07 10:09:41 by smokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int len;

	i  = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	while (i <= n && i <= len)
	{
		dest[i] = src[i];
	}
	while (n <= len)
	{
		dest[i] = '\0';
		i++;
	}
	if (n > len)
	{
		dest[i] = '/0';
	}
}
