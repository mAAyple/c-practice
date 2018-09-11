#include <stdio.h>
#include <curses.h>

int main() {
	initscr();
	mvprintw(LINES / 2, COLS / 2, "Space Game Two");
  	refresh();
  	getch();
	endwin();	
}
