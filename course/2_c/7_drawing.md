# Drawing on the terminal #

Use a library called **ncurses** to draw for us.

Install it by doing:

```sh
sudo apt install libncurses5-dev
```

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

## Exercise ##

Draw a square right in the middle of the screen. Tip: use loops. First draw it at 0, 0. Then move the draw to the middle. Take into consideration the size of the square.

Then print the square properties towards the bottom of the screen. Use the function **mvprintw**.

Try changing the colors. Create a different color pair.

## Exercise ##

Draw circles. Have to explain cos and sin, radians and degrees.

Sample code:

```c
for (deg = 0; deg < 360.0f; deg += 1.0f) {
		x = width+(int)(width * cos(DEGTORAD(deg)));
		y = height+(int)(height * sin(DEGTORAD(deg)));
    // 
}
```
