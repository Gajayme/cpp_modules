/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:28:24 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/29 14:15:27 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type): _type(type){

	std::cout<<COLOR_RED<<"Animal constructor\n"<<COLOR_DEFAULT;
}

Animal::Animal(const Animal & a){

	std::cout<<COLOR_RED<<"Animal copy constructor\n"<<COLOR_DEFAULT;
	_type = a._type;
}

Animal & Animal::operator=(const Animal & a){

	std::cout<<COLOR_RED<<"Animal assignment\n"<<COLOR_DEFAULT;
	if (this != &a){
		_type = a._type;
	}
	return (*this);
}

Animal::~Animal(){

	std::cout<<COLOR_RED<<"Animal destructor\n"<<COLOR_DEFAULT;
}

void Animal::makeSound() const {

}

std::string Animal::getType() const {

	return _type;
}

std::string Animal::get_idea(unsigned int num) const {

	return("No idea under num " + std::to_string(num));
}
