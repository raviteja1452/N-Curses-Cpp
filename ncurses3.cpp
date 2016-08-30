// RationalCoders

#include<iostream>
#include</usr/local/Cellar/ncurses/6.0_1/include/ncurses.h>

using namespace std;

int main(void){
	initscr();
	int c;
	printw("Write something (ESC to escape) :");
	while((c=getch())!=27){
		move(10,0);
		printw("keycode : %d, and the character : %c ",c,c);
		move(0,0);
		printw("Write something (ESC to escape) :");
	}
	endwin();
	return 0;
}