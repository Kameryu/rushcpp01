// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: fpons <fpons@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/16 10:56:52 by fpons             #+#    #+#             //
//   Updated: 2015/11/16 17:34:20 by fpons            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "include/Window.hpp"
#include <curses.h>

int		main( void ) {
	Window	win;

	initscr();
	cbreak();
	keypad(stdscr, TRUE);
	noecho();
	win.generatorWindow();
	
	endwin();

	return (0);
}

