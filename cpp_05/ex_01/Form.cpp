/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:30:44 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/17 13:26:18 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


//CLASSIC
Form::Form(std::string name, int grade): name_(name), required_grade_(grade){

	std::cout<<"Form constructor\n";
	if (grade > 150){
		throw GradeTooLowException();
	}
	else if(grade < 1){
		throw GradeTooHighException();
	}
	if_signed_ = 0;
}

Form::Form(const Form &a): name_(a.getName()), required_grade_(a.getReqGrade()), if_signed_(a.getIfSigned()){
	std::cout<<"Form copy\n";

}

Form::~Form(){
	std::cout<<"Form destrutor\n";
}


//not to use!
Form & Form::operator=(const Form & a){
	(void) a;
	return (*this);
}

void Form::beSigned(const Bureaucrat &a){

	if (a.getGrade() > required_grade_){
		std::cout<<COLOR_YELLOW<<a.getName()<<" couldn’t sign "<<name_<<" because his grade is low\n"<<COLOR_DEFAULT;
		throw GradeTooLowException();
	}
	else if (if_signed_){
			std::cout<<COLOR_YELLOW<<a.getName()<<" couldn’t sign "<<name_<<" because it is already signed\n"<<COLOR_DEFAULT;
		throw FormAlreadySignedException();
	}
	if_signed_ = 1;
	std::cout<<COLOR_GREEN<<a.getName()<<" signed "<<name_<<::std::endl<<COLOR_DEFAULT;
	//std::cout<<COLOR_GREEN<<name_<<" have been signed by "<<a.getName()<<std::endl<<COLOR_DEFAULT;
}


//GETTERS
std::string Form::getName() const{
	return (name_);
}

int	Form::getReqGrade() const{
	return (required_grade_);
}

bool Form::getIfSigned() const{
	return (if_signed_);
}


//COUT
std::ostream & operator <<(std::ostream &out, const Form & a){
	out<<COLOR_MAGENTA<<a.getName()<<" form, grade "<<a.getReqGrade();
	if (a.getIfSigned())
		out<<COLOR_GREEN<<". Signed\n"<<COLOR_DEFAULT;
	else
		out<<COLOR_DEFAULT<<". Unsigned\n";

	return (out);
}


//EXCEPTIONS
const char * Form::GradeTooHighException::what() const throw(){
	return("FormException: grade too hight");
}

const char * Form::GradeTooLowException::what() const throw(){
	return("FormException: grade too low");
}

const char * Form::FormAlreadySignedException::what() const throw(){
	return("FormException: form already signed");
}
