/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSInfoModule.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorin <msorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 11:42:51 by msorin            #+#    #+#             */
/*   Updated: 2015/11/17 11:52:56 by msorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OSInfoModule.hpp"

OSInfoModule::OSInfoModule ( void ): AMonitorModule("OS Informations")
{
	this->setOSInfo();
}

OSInfoModule::OSInfoModule ( OSInfoModule const & src )
{
	*this = src;
}

OSInfoModule::~OSInfoModule ( void )
{
}

OSInfoModule &	OSInfoModule::operator=( OSInfoModule const & src )
{
	this->_osInfo = src.getOSInfo();

	return *this;
}

void			OSInfoModule::setOSInfo ( void )
{
	// to code;
}

void			OSInfoModule::drawContent ( void )
{
	// to code;
}

OSContainer &	_getOSInfo ( void )
{
	return this->_osInfo;
}
