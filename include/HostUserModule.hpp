/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostUserModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorin <msorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 16:05:48 by msorin            #+#    #+#             */
/*   Updated: 2015/11/16 17:07:05 by msorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSTUSRMODULE_HPP
# define HOSTUSRMODULE_HPP

# include "AMonitorModule.hpp"

class HostUserModule : public AMonitorModule
{
	public:
		HostUserModule ( int width, int height, std::string title );
		HostUserModule ( HostUserModule const & src );
		virtual ~HostUserModule ( void );

		HostUserModule &	operator=( HostUserModule const & src );

		void				setHost ( void );
		void				setUser ( void );
		std::string			getHost ( void ) const;
		std::string			getUser ( void ) const;

		virtual void		drawContent ( void );

	private:
		HostUserModule ( void );
		std::string	_host;
		std::string	_user;
};

#endif
