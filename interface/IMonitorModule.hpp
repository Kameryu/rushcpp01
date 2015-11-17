/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorin <msorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 12:51:33 by msorin            #+#    #+#             */
/*   Updated: 2015/11/16 17:42:03 by msorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

# include <string>

class Display; //or Window to discuss

class IMonitorModule
{
	public:
		virtual ~IMonitorModule ( void ) {}

		virtual std::string	getTitle ( void ) const = 0;
		virtual void		drawContent ( void ) = 0;
		//virtual void		draw ( ) = 0;
};

#endif
