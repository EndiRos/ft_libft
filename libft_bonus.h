/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft _bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:20:47 by enetxeba          #+#    #+#             */
/*   Updated: 2024/12/01 12:04:28 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

# include <stdlib.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void			ft_lstadd_back(t_list **lst, t_list *);
void 			ft_lstadd_front(t_list **lst, t_list *);
void 			ft_lstclear(t_list **lst, void (*del)(void *));
void 			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list 			*ft_lstlast(t_list *lst);
t_list 			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list			*ft_lstnew(void *content);
int 			ft_lstsize(t_list *lst);

#endif
