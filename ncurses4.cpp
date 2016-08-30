// RationalCoders

#include<iostream>
#include</usr/local/Cellar/ncurses/6.0_1/include/ncurses.h>

using namespace std;

int main(void){
	initscr();
	int x,y;
	getmaxyx(stdscr,y,x);
	move(y/2,x/2);
	attron(A_BOLD);
	printw("a");
	attroff(A_BOLD);
	refresh();
	getch();
	endwin();
	return 0;
}