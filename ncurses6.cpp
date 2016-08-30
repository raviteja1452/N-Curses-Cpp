#include<iostream>
#include</usr/local/Cellar/ncurses/6.0_1/include/ncurses.h>

using namespace std;

int main(void){

	initscr();
	// --To avoid the delay on getch()
	//nodelay(stdscr,true);

	// --For Keypad 
	//keypad(stdscr,true);

	// -- Curser not visible
	//curs_set(0);

	// --Window Functions
	// WINDOW *win;
	// win = newwin(10,10,10,10);
	// wrefresh(win);
	// delwin(win);
	getch();
	endwin();
	return 0;
}