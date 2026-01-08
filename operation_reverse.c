/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchouaf <nchouaf@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 19:17:08 by nchouaf           #+#    #+#             */
/*   Updated: 2026/01/07 19:17:17 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_silent(t_stack *a)
{
	int	temp;
	int	i;

	if (a->size >= 2)
	{
		temp = a->tab[a->size - 1];
		i = a->size - 1;
		while (i > 0)
		{
			a->tab[i] = a->tab[i - 1];
			i--;
		}
		a->tab[0] = temp;
	}
}

void	rra(t_stack *a)
{
	rra_silent(a);
	write(1, "rra\n", 4);
}

void	rrb_silent(t_stack *b)
{
	int	temp;
	int	i;

	if (b->size >= 2)
	{
		temp = b->tab[b->size - 1];
		i = b->size - 1;
		while (i > 0)
		{
			b->tab[i] = b->tab[i - 1];
			i--;
		}
		b->tab[0] = temp;
	}
}

void	rrb(t_stack *b)
{
	rrb_silent(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra_silent(a);
	rrb_silent(b);
	write(1, "rrr\n", 4);
}
