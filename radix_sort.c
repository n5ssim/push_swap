/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchouaf <nchouaf@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:15:55 by nchouaf           #+#    #+#             */
/*   Updated: 2026/01/08 12:23:57 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->tab[i] > a->tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	radix_loop(t_stack *a, t_stack *b, int max_bits)
{
	int	size;
	int	bit;
	int	i;

	size = a->size;
	bit = 0;
	while (bit < max_bits)
	{
		i = 0;
		while (i < size)
		{
			if (((a->tab[0] >> bit) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		while (b->size > 0)
			pa(a, b);
		bit++;
	}
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	size;

	if (is_sorted(a))
		return ;
	if (a->size == 2)
		return (sort_two(a));
	if (a->size == 3)
		return (sort_three(a));
	if (a->size == 4)
		return (sort_four(a, b));
	if (a->size == 5)
		return (sort_five(a, b));
	size = a->size;
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	radix_loop(a, b, max_bits);
}
