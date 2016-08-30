// RationalCoders
// Colors

#include<iostream>
#include</usr/local/Cellar/ncurses/6.0_1/include/ncurses.h>

using namespace std;

int main(void){
	initscr();
	start_color();
	init_pair(1,COLOR_RED,COLOR_BLACK);
	init_pair(2,COLOR_BLUE,COLOR_WHITE);
	
	attron(COLOR_PAIR(1));
	printw("Something");
	attroff(COLOR_PAIR(1));
	refresh();
	getch();
	
	attron(COLOR_PAIR(2));
	printw("Something");
	attroff(COLOR_PAIR(1));
	refresh();
	
	getch();

	endwin();
	return 0;
}