// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Window.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: fpons <fpons@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/16 11:31:43 by fpons             #+#    #+#             //
//   Updated: 2015/11/16 18:12:24 by fpons            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "../include/Window.hpp"
#include <curses.h>
#include <string>
#include <time.h>

Window::Window( void ) {
}

Window::Window ( Window const & src ) {
	*this = src;
}

Window	&Window::operator=( Window const & rhs ) {
	(void)rhs;
	return *this;
}

void	Window::generatorWindow( void ) {
int		ch;

	while ((ch = getch()) != 27)
	{
		static WINDOW	*local_win = NULL;
		int		x,y;
		time_t	start,end;
		
		wclear(local_win);
		getyx(local_win, y, x);
		start = time(&start);
		end = time(&end);
		while (difftime(end, start) < 1)
			end = time(&end);
		local_win = newwin(39, 117, 0, 0);
		wborder(local_win, '|', '|', '-', '-', '+', '+', '+', '+');
//		::os();
//		::date();
		wresize(local_win, y, x);
		mvwprintw(local_win, 0, 45, "le nom du truc bidule");
		wrefresh(local_win);
		this->hostname();
	}
}

void		Window::hostname( void ) {
	static WINDOW	*win = NULL;

	wclear(win);
	win = newwin(4, 50, 2, 2);
	wborder(win, '|', '|', '-', '-', '/', '\\', '\\', '/'); 
	mvwprintw(win, 0, 1, "Hostname");
	wrefresh(win);
}
