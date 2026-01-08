/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchouaf <nchouaf@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:18:50 by nchouaf           #+#    #+#             */
/*   Updated: 2026/01/06 17:19:41 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	int	temp;
	int	i;

	if (a->size < 1)
		return;
	temp = a->tab[0];
	i = b->size;
	while (i > 0)
	{
		b->tab[i] = b->tab[i - 1];
		i--;
	}
	b->tab[0] = temp;
	i = 0;
	while (i < a->size - 1)
	{
		a->tab[i] = a->tab[i + 1];
		i++;
	}
	b->size++;
	a->size--;
	write(1, "pb\n", 3);
}

void	pa(t_stack *a, t_stack *b)
{
	int	temp;
	int	i;
	
	if (b->size < 1)
		return;
	temp = b->tab[0];
	i = a->size;
	while (i > 0)
	{
		a->tab[i] = a->tab[i - 1];
		i--;
	}
	a->tab[0] = temp;
	i = 0;
	while (i < b->size - 1)
	{
		b->tab[i] = b->tab[i + 1];
		i++;
	}
	a->size++;
	b->size--;
	write(1, "pa\n", 3);
}
