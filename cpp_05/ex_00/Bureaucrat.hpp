/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:46:09 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/05 21:31:10 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

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
