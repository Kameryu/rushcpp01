/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorin <msorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 13:48:03 by msorin            #+#    #+#             */
/*   Updated: 2015/11/17 11:38:36 by msorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMONITORMODULE_HPP
# define AMONITORMODULE_HPP

# include "IMonitoringModule.hpp"
# include "utils.hpp"

class AMonitorModule : public IMonitorModule
{
	public:
		AMonitorModule ( std::string title );
		AMonitorModule ( AMonitorModule const & src );
		virtual ~AMonitorModule ( void );

		AMonitorModule &	operator=(AMonitorModule const & src );

		virtual std::string	getTitle ( void ) const;

		virtual void		drawContent ( void ) = 0;

	private:
		AMonitorModule ( void );

		const std::string	_title;
};

#endif
