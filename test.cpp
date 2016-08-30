// RationalCoders

#include<iostream>
#include</usr/local/Cellar/ncurses/6.0_1/include/ncurses.h>

using namespace std;

int main(void){
	initscr();
	printw("Hello world");
	refresh();
	getch();
	endwin();
	return 0;
}