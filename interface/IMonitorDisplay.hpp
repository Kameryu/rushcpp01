// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IMonitorDisplay.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: fpons <fpons@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/16 10:59:47 by fpons             #+#    #+#             //
//   Updated: 2015/11/16 11:21:05 by fpons            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef IMONITORDISPLAY_H
# define IMONITORDISPLAY_H

# include <iostream>
# include <curses.h>

class	IMonitorDisplay {

	public:

	virtual ~IMonitorDisplay( void ) {}
	virtual	void	generateWindow( void ) = 0;
	virtual	int		rezise( void ) = 0;
};
#endif
