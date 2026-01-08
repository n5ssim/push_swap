/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchouaf <nchouaf@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:07:53 by nchouaf           #+#    #+#             */
/*   Updated: 2026/01/06 17:18:34 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_silent(t_stack *a)
{
	int	temp;

	if (a->size >= 2)
	{
		temp = a->tab[0];
		a->tab[0] = a->tab[1];
		a->tab[1] = temp;
	}
}

void	sa(t_stack *a)
{
	sa_silent(a);
	write(1, "sa\n", 3);
}

void	sb_silent(t_stack *b)
{
	int	temp;

	if (b->size >= 2)
	{
		temp = b->tab[0];
		b->tab[0] = b->tab[1];
		b->tab[1] = temp;
	}
}

void	sb(t_stack *b)
{
	sb_silent(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	sa_silent(a);
	sb_silent(b);
	write(1, "ss\n", 3);
}
