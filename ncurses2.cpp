// RationalCoders

#include<iostream>
#include</usr/local/Cellar/ncurses/6.0_1/include/ncurses.h>

using namespace std;

int main(void){
	initscr();

	move(5,2);
	printw("Hello World");

	mvprintw(11,10,"Hello World");
	
	refresh();
	getch();
	endwin();
	return 0;
}