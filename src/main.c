/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 03:11:04 by lmartins          #+#    #+#             */
/*   Updated: 2020/07/07 06:47:04 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int main()
{
	//char char_test = 'H';
	// char *string_test = NULL;
	void *int_test;
	// int negative_int_test = -42;
	// unsigned int unsigned_test = 3000000001;

	ft_printf("Printm: \"%.*p\"\n", 3, &int_test);
	printf("Printf: \"%.*p\"\n", 3, &int_test);
	ft_printf("\n");
	return (0);
}