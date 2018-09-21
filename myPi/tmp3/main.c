/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 01:13:14 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/20 00:37:48 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);

t_list	*ft_list_push_params(int ac, char **av);

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_list_sort(t_list **begin_list, int (*cmp)());

void	ft_putstr(void *str)
{
	printf("OK : %s\n", str);
}

int		main(int argc, char **argv)
{
	t_list	*e;
	t_list	*e2;
	char	*test = "Salam est labas";
	char	*test2 = "Bikhirrr !!!";

	e = NULL;	
	e = ft_list_push_params(argc, argv);
	ft_list_sort(&e, &strcmp);
	ft_sorted_list_insert(&e, "zzzz111", &strcmp);
	ft_sorted_list_insert(&e, "aaaa111", &strcmp);
	ft_sorted_list_insert(&e, "dddd111", &strcmp);
	ft_list_foreach(e, &ft_putstr);
//	printf("=====%p=%p====\n", e, e->next);
//	ft_list_reverse_fun(e);
//	ft_list_foreach(e, &ft_putstr);
/*	while (e->next != NULL)
	{
		printf("Ok : %s ==> %p ==> %p \n", e->data, e, e->next);
		getchar();
		e = e->next;
	}
	printf("Ok : %s ==> %p ==> %p \n", e->data, e, e->next);
	getchar();
*/
//	printf("=====%p=%p====\n", e, e->next);
//	ft_list_remove_if(&e, "./a.out", &strcmp);
//	printf("Size : %d\n", ft_list_size(e));
//	ft_list_reverse(&e);
//	if (e != NULL)
//		ft_list_foreach(e, &ft_putstr);
//	e2 = ft_create_elem(test);
//	ft_list_push_back(&e2, test2);\
//	ft_list_push_front(&e2, "Hihoooo!");
//	ft_list_merge(&e, e2);
//	ft_list_foreach(e, &ft_putstr);
/*	e2 = e;
	while (e2->next != NULL)
	{
		printf("Ajo nchofo %p ==> next dyalha ==> %p\n", e2, e2->next);
		e2 = e2->next;
	}
		printf("Ajo nchofo %p ==> next dyalha ==> %p\n", e2, e2->next);
	printf("Size : %d\n", ft_list_size(e));
	printf("=-=-=-=-==--=-=-=-=-=-==-=-==-=-==-=\n");
*/
//	ft_list_sort(&e, &ft_strcmp);
//	ft_list_foreach(e, &ft_putstr);
//	e = ft_list_at(e, 4);
//	ft_list_clear(&e);
/*	ft_list_reverse(&e);
 	while (e->next != NULL)
	{
		printf("%s\n", e->data);
		e = e->next;
	}

//	printf("%s\n", e->data);
	if (e->next == NULL)
		printf("Null");
*/
//	ft_list_remove_if(&e, "./a.out", &ft_strcmp);
//	ft_list_foreach_if(e, &ft_putstr, "./a.out", &ft_strcmp);
//	printf("%s\n", ft_list_find(e, "Salam", &ft_strcmp)->data);
	return (0);
}
