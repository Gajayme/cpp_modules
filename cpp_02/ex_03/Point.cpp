/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:41:57 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/18 19:23:32 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){
	std::cout<<"Default constructor called\n";
}

Point::Point(float const x, float const y): x(x), y(y){
	std::cout<<"Float constructor called\n";
}

Point::Point(Point const & a): x(a.x), y(a.y) {
	std::cout<<"Copy constructor called\n";
}

//??????
Point & Point::operator =(Point const & a){
	std::cout<<"Assignment constructor called\n";

	(void) a;

	return ( *this);
}

Point::~Point(){
	std::cout<<"Destructor called\n";
}
