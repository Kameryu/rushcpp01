/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSInfoModule.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorin <msorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 11:00:11 by msorin            #+#    #+#             */
/*   Updated: 2015/11/17 11:50:43 by msorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSINFOMODULE_HPP
# define OSINFMODULE_HPP

# include "AMonitorModule.hpp"

# define B_S 256

struct	OSContainer
{
	char	model[B_S];
	char	machine[B_S];
	char	ostype[B_S];
	char	osrelease[B_S];
};

class OSInfoModule : public AMonitorModule
{
	public:
		OSInfoModule ( void );
		OSInfoModule ( OSInfoModule const & src );
		virtual ~OSInfoModule ( void );

		OSInfoModule &	operator=( OSInfoModule const & src );

		void			setOSInfo ( void );
		virtual void	drawContent ( void );

	protected:
		OSContainer &	_getOSInfo ( void );

	private:
		OSContainer		_osInfo;
};

#endif
