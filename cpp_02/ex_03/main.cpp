/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:21:53 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/20 17:31:00 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void){

	Point a(1.0f, 1.0f);
	Point b(3.0f, 1.0f);
	Point c(2.0f, 3.0f);

	Point point(2.0f, 2.0f);
	bsp(a, b, c, point);

	Point point_0(2.7f, 1.1f);
	bsp(a, b, c, point_0);

	Point point_1(4.0f, 5.0f);
	bsp(a, b, c, point_1);

	Point point_2(1.0f, 1.0f);
	bsp(a, b, c, point_2);

	Point point_3(1.0f, 2.5f);
	bsp(a, b, c, point_3);

	return(0);
}
