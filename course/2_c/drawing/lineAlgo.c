#include <ncurses.h>

int main(int argc, char *argv[])
{
  int maxY, maxX;

  // start curses
  initscr();

  // disable mouse
  curs_set(0);

  // init color
  start_color();

  // foreground red, background black
  init_pair(1, COLOR_GREEN, COLOR_BLACK);
  attron(COLOR_PAIR(1));

  // get screen max/min
  getmaxyx(stdscr, maxY, maxX);

  // draw
  // draw a line from 10,10 to 30,30 
  int x1 = 5, y1 = 50;
  int x2 = 20, y2 = 20;
  int dx = x2 - x1;
  int dy = y2 - y1;

  for (int x = x1; x < x2; x++) {
    int y = y1 + dy * (x - x1) / dx;
    mvaddch(y, x, '#');
  }

  // done drawing
  refresh();

  // turn off the color mode
  attroff(COLOR_PAIR(1));

  // ask the user for input so that the drawing stays on screen
  getch();

  // stop ncurses
  endwin();

  return 0;
}
