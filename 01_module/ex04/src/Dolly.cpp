/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dolly.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:18:15 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/09 17:10:52 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dolly.hpp"

Dolly::Dolly( std::string filename ) :_source(filename){
	this->_mycopy = filename + ".replace";
}

Dolly::~Dolly( void ){}

void	Dolly::replace( std::string oldStr, std::string newStr ){
	std::ifstream src(this->_source.c_str(), std::ifstream::in);
	if (src.is_open()){
		std::string line;

		std::ofstream cpy(this->_mycopy.c_str(), std::ofstream::out);

		while (std::getline(src, line)){
			std::size_t found = line.find(oldStr);
			while (found!=std::string::npos){
				line.erase(found, oldStr.length());
				line.insert(found, newStr);
				found = line.find(oldStr);
			}
			if (cpy.is_open()){
				cpy << line << std::endl;
			}
		}
		cpy.close();
		src.close();
	}
	else
		std::cout << "Error while opening file" << std::endl;
}