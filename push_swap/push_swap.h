/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:24:10 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/25 18:09:10 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

/* algorithm.c */
void	first_step(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	second_step(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	short_sort(int *stack);
void	third_step(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	last_step(int *stack_a, int size_a);
/* algorithm_utils.c */
int		number_of_moves(int cont_a, int size_a, int cont_b, int size_b);
int		min_cost_pos(int **lists, int size_a, int size_b);
void	get_to_pos(int **lists, int size_a, int size_b, int pos);
/* get_stacks.c */
int		*get_stack_a(int *argc, char **argv);
int		*one_argument(int *size, char **items);
int		num_args(char *str);
/* check_errors.c */
int		check_errors(int argc, char **argv);
int		check_int_args(int argc, char **argv);
int		check_valid_int(int argc, char **argv);
int		check_no_rep(int size, int *stack);
int		valid_string(char *str);
/* moves.c */
void	moves_r(int **lists, int size_a, int size_b, int *moves);
void	moves_rr(int **lists, int size_a, int size_b, int *moves);
void	mixed_moves(int **lists, int size_a, int size_b, int *moves);
/* operations_s.c */
void	s_function(int *stack, int size);
void	sa(int *stack_a, int size_a);
void	sb(int *stack_b, int size_b);
void	ss(int *stack_a, int size_a, int *stack_b, int size_b);
/* operations_r.c */
void	r_function(int *stack, int size);
void	ra(int *stack_a, int size_a);
void	rb(int *stack_b, int size_b);
void	rr(int *stack_a, int size_a, int *stack_b, int size_b);
/* operations_rr.c */
void	rr_function(int *stack, int size);
void	rra(int *stack_a, int size_a);
void	rrb(int *stack_b, int size_b);
void	rrr(int *stack_a, int size_a, int *stack_b, int size_b);
/* operations_p.c */
void	pa(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	pb(int *stack_a, int *size_a, int *stack_b, int *size_b);
/* print_stacks.cs */
void	print_stacks(int *stack_a, int size_a, int *stack_b, int size_b);
void	print_error(void);
/* sorted_list.c */
int		*copy_sort_list(int *stack, int size);
int		sorted_pos(int *sorted, int number, int size);
int		*join_sort_lists(int *stack_a, int size_a, int *stack_b, int size_b);
void	sort_list(int *copy, int size);
#endif