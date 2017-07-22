# Drawing on the terminal #

Use a library called **ncurses** to draw for us.

Use the following code to draw a line:

```c
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
  init_pair(1, COLOR_RED, COLOR_BLACK);
  attron(COLOR_PAIR(1));

  // get screen max/min
  getmaxyx(stdscr, maxY, maxX);

  // draw
  for (int i = 0; i < 10; i++) {
    mvaddch(maxY / 2, maxX / 2 + i, '#');
  }

  //mvprintw(0, 10, "foo");

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
```

Explain what each part of the code does.
