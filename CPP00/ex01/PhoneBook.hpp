/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:32:43 by yokitaga          #+#    #+#             */
/*   Updated: 2023/12/11 23:57:33 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif

#include "Contact.hpp"

class PhoneBook
{
private:
	int		currentIndex;
	Contact contacts[MAX_CONTACTS];
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search()const;
	void	exit()const;
};

#endif