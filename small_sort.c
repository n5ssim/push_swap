/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchouaf <nchouaf@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:37:45 by nchouaf           #+#    #+#             */
/*   Updated: 2026/01/08 12:40:23 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *a)
{
	if (a->tab[0] > a->tab[1])
		sa(a);
}

void	sort_three(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->tab[0];
	second = a->tab[1];
	third = a->tab[2];
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

int	get_min_index(t_stack *a)
{
	int	i;
	int	min;
	int	min_index;

	i = 0;
	min = a->tab[0];
	min_index = 0;
	while (i < a->size)
	{
		if (a->tab[i] < min)
		{
			min = a->tab[i];
			min_index = i;
		}
		i++;
	}
	return (min_index);
}

void	sort_four(t_stack *a, t_stack *b)
{
	int	min_index;

	min_index = get_min_index(a);
	if (min_index == 1)
		sa(a);
	else if (min_index == 2)
	{
		ra(a);
		ra(a);
	}
	else if (min_index == 3)
		rra(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack *a, t_stack *b)
{
	int	min_index;

	while (a->size > 3)
	{
		min_index = get_min_index(a);
		if (min_index == 0)
			pb(a, b);
		else if (min_index <= a->size / 2)
			ra(a);
		else
			rra(a);
	}
	sort_three(a);
	while (b->size > 0)
		pa(a, b);
}
