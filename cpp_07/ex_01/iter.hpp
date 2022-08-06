/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:24:51 by gajayme           #+#    #+#             */
/*   Updated: 2022/08/06 20:02:52 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

template <typename T>
void test(const T &el){
	std::cout<<el<<std::endl;
}

template <typename T>
void iter(T *adress, size_t len, void (* func)(const T &)){

	if (!adress)
		return ;

	for (size_t i = 0; i != len; ++i){
		func(*adress);
		adress++;
	}
}


class Bureaucrat{

private:

	const std::string	name_;
	int					grade_;


public:
	//constructors
	Bureaucrat(std::string name, int grade = 150);
	Bureaucrat(const Bureaucrat & a);
	~Bureaucrat();

	//assignment
	Bureaucrat & operator =(const Bureaucrat & a);

	std::string	getName() const;
	int 		getGrade() const;

	void		incrementGrade();
	void		decrementGrade();

	class GradeTooHighException: public std::exception{
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception{
		virtual const char *what() const throw();
	};
};

std::ostream & operator <<(std::ostream &out, const Bureaucrat &a);

#endif