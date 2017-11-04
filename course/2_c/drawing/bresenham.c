#include <stdio.h>
#include <ncurses.h>
#include <math.h>

#define DEGTORAD(deg) (deg * (M_PI / 180.0f))

void drawLine(int x0, int y0, int x1, int y1)
{
  // Bresenham's line drawing algorithm
  int sx, sy, e2, err;

  // calculate slope
  int dx = abs(x1 - x0);
  int dy = abs(y1 - y0);

  // calculate the signs to the slope
  if (x0 < x1) {
    sx = 1;
  } else {
    sx = -1;
  }

  if (y0 < y1) {
    sy = 1;
  } else {
    sy = -1;
  }

  // calculate the starting error
  if (dx > dy) {
    err = dx / 2;
  } else {
    err = -dy / 2;
  }
 
  // draw the line
  while(true) {
    mvaddch(y0, x0, '#');
    if (x0 == x1 && y0 == y1) {
      break;
    }

    e2 = err;

    // recalculate the error based on line slope and sign
    // if the error reaches the slope, update the error and current position
    if (e2 > -dx) { err -= dy; x0 += sx; }
    if (e2 < dy) { err += dx; y0 += sy; }
  }
}

int main()
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
  int lastX = -1, lastY = -1; 
  int radius = 10;

  for (float deg = 0; deg <= 360.0f; deg += 45.0f) {
    int x = maxX / 2 + (int)(radius * cos(DEGTORAD(deg)));
    int y = maxY / 2 + (int)(radius * sin(DEGTORAD(deg)));

    if (lastX > -1 && lastY > -1) {
      printf("%d %d %d %d\n", lastX, lastY, x, y);
      drawLine(lastX, lastY, x, y);
    }

    printf("%d %d\n", x, y);
    lastX = x;
    lastY = y;
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
