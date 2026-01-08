/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchouaf <nchouaf@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:58:58 by nchouaf           #+#    #+#             */
/*   Updated: 2026/01/06 17:02:38 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack(t_stack *stack, int capacity)
{
	stack->tab = malloc(capacity * sizeof(int));
	if (!stack->tab)
		return (0);
	stack->size = 0;
	return (1);
}

int	fill_stack(t_stack *stack, int argc, char **argv)
{
	int		i;
	long	num;

	i = 0;
	while (i < argc - 1)
	{
		if (!is_valid_number(argv[i + 1]))
			return (0);
		num = ft_atol(argv[i + 1]);
		if (is_overflow(num))
			return (0);
		stack->tab[i] = (int)num;
		stack->size++;
		i++;
	}
	if (has_duplicates(stack))
		return (0);
	return (1);
}
