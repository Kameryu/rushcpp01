/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMonitorModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorin <msorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 14:05:53 by msorin            #+#    #+#             */
/*   Updated: 2015/11/16 17:22:47 by msorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMonitorModule.hpp"

AMonitorModule::AMonitorModule ( std::string title ): _title(title)
{
};

AMonitorModule::AMonitorModule ( AMonitorModule const & src ): _title(src.getTitle())
{
	*this = src;
};

AMonitorModule::~AMonitorModule ( void )
{
};

AMonitorModule &	AMonitorModule::operator=( AMonitorModule const & src )
{
	this->_width = src.getWidth();
	this->_heigth = src.getHeigth();

	return *this;
}

void		AMonitorModule::setWidth ( int w )
{
	this->_width = w;
}

void		AMonitorModule::setHeight ( int h )
{
	this->_height = h;
}

int			AMonitorModule::getWidth ( void ) const
{
	return this->_width;
}

int			AMonitorModule::getHeight ( void ) const
{
	return this->_height;
}

std::string	AMonitorModule::getTitle ( void ) const
{
	return this->_title;
}
