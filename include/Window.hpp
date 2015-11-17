// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Window.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: fpons <fpons@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/16 11:25:39 by fpons             #+#    #+#             //
//   Updated: 2015/11/16 17:33:41 by fpons            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WINDOW_H
# define WINDOW_H

# include <curses.h>

class	Window {

	public:

	Window( void );
	Window( Window const & src );
	virtual ~Window( void ) {}

	Window	&operator=( Window const & rhs );
	void	generatorWindow( void );
	void	hostname( void );
	void	os( void );
	void	date( void );
};
#endif
