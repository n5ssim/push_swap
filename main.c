/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchouaf <nchouaf@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:56:10 by nchouaf           #+#    #+#             */
/*   Updated: 2026/01/06 16:58:34 by nchouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc < 2)
		return (0);
	if (!init_stack(&a, argc - 1) || !init_stack(&b, argc - 1))
		return (1);
	if (!fill_stack(&a, argc, argv))
	{
		free(a.tab);
		free(b.tab);
		write(2, "Error\n", 6);
		return (1);
	}
	normalize(&a);
	radix_sort(&a, &b);
	free(a.tab);
	free(b.tab);
	return (0);
}
