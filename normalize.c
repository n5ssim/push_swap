/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchouaf <nchouaf@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:23:48 by nchouaf           #+#    #+#             */
/*   Updated: 2026/01/07 20:30:35 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalize(t_stack *a)
{
	int	*new_tab;
	int	i;
	int	j;
	int	count;
	
	new_tab = malloc(a->size * sizeof(int));
	if (!new_tab)
		return;
	i = 0;
	while (i < a->size)
	{
		count = 0;
		j = 0;
		while (j <  a->size)
		{
			if (a->tab[j] < a->tab[i])
				count++;
			j++;
		}
		new_tab[i] = count;
		i++;
	}
	free(a->tab);
	a->tab = new_tab;
}
