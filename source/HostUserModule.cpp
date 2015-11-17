/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostUserModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorin <msorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 17:12:00 by msorin            #+#    #+#             */
/*   Updated: 2015/11/16 17:41:30 by msorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMonitorModule.hpp"

HostUserModule::HostUserModule ( std::string title ): AMonitorModule(title)
{
	this->setHost();
	this->setUser();
}

HostUserModule::HostUserModule ( HostUserModule const & src )
{
	*this = src;
}

HostUserModule::~HostUserModule ( void )
{
}

HostUserModule &	HostUserModule::operator=( HostUserModule const & src )
{
	this->_host = src.getHost();
	this->_user = src.getUser();

	return *this;
}

void				setHost ( void )
{
	std::string	tmp;
	char		rawHost[150];
	int			i = 0;

	gethostname(rawHost, 150);

	while (rawHost[i])
	{
		tmp += rawHost[i];
		i++;
	}

	this->_host = tmp;
}

void				setUser ( void )
{
	std::string	tmp;
	char		rawUser[150];
	int			i = 0;

	getlogin_r(rawUser, 150);

	while (rawUser[i])
	{
		tmp += rawUser[i];
		i++;
	}

	this->_user = tmp;
}

std::string			getHost ( void ) const
{
	return this->_host;
}

std::string			getUser ( void ) const
{
	return this->_user;
}
