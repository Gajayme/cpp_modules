/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:51:12 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/06 14:17:59 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name_(name){

	std::cout<<"Bureaucrat constructor called\n";
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & a): name_(a.getName()), grade_(a.getGrade()){
	std::cout<<"Bureaucrat copy called\n";

}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & a){
	std::cout<<"Bureaucrat assignment called\n";
	if (this != &a){
		grade_ = a.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(){
	std::cout<<"Bureaucrat destructor called\n";

}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
	return("BureaucratException: grade too hight");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
	return("BureaucratException: grade too low");
}

std::string Bureaucrat::getName()const{
	return (name_);
}

int Bureaucrat::getGrade()const{
	return (grade_);
}

void Bureaucrat::incrementGrade(){
	if (grade_ == 1){
		throw GradeTooHighException();
	}
	grade_ --;
}

void Bureaucrat::decrementGrade(){
	if (grade_ == 150){
		throw GradeTooLowException();
	}
	grade_ ++;
}

std::ostream & operator <<(std::ostream &out, const Bureaucrat &a){

	out<<COLOR_BLUE<<a.getName()<<", bureaucrat grade "<<a.getGrade()<<std::endl<<COLOR_DEFAULT;
	return (out);
}
