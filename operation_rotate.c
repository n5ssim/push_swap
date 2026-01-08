/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchouaf <nchouaf@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:59:04 by nchouaf           #+#    #+#             */
/*   Updated: 2026/01/07 17:36:32 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_silent(t_stack *a)
{
	int	temp;
	int	i;

	if (a->size >= 2)
	{
		temp = a->tab[0];
		i = 0;
		while (i < a->size - 1)
		{
			a->tab[i] = a->tab[i + 1];
			i++;
		}
		a->tab[i] = temp;
	}
}

void	ra(t_stack *a)
{
	ra_silent(a);
	write(1, "ra\n", 3);
}

void	rb_silent(t_stack *b)
{
	int	temp;
	int	i;

	if (b->size >= 2)
	{
		temp = b->tab[0];
		i = 0;
		while (i < b->size - 1)
		{
			b->tab[i] = b->tab[i + 1];
			i++;
		}
		b->tab[i] = temp;
	}
}

void	rb(t_stack *b)
{
	rb_silent(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ra_silent(a);
	rb_silent(b);
	write(1, "rr\n", 3);
}
