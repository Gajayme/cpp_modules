/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   P_book.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:49:03 by lyubov            #+#    #+#             */
/*   Updated: 2022/05/30 00:26:23 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_BOOK_HPP
# define P_BOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class	PhoneBook{

	public:
	PhoneBook ();
	~PhoneBook();

	void	add();
	int		add_param(std::string &param);
	void	search();
	void	search_get_contact();
	void	search_print(std::string to_print);

	private:
	Contact	contacts[8];
	int		counter;
	int		contacts_amount;
};

#endif
