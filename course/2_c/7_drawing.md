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
  x = width + (int)(radius * cos(DEGTORAD(deg)));
  y = height + (int)(radius * sin(DEGTORAD(deg)));

  // draw
}
```

## Animation ##

Use `usleep` to sleep microseconds.

```c
#include <unistd.h>

usleep(microseconds);
```

Use `-std=gnu99` to get rid of the warning.

## Exercise ##

Print something out at a particular rate. Get a feel for how long a second is, and what parts of a second is.

## Exercise ##

Move a character across the screen. Visit every single square. Use the function `clear()` to remove the last draw.

## Random numbers ##

Random numbers are a series of numbers that has no pattern.

Some examples of non-random and random numbers.

There's also something called pseudo-random numbers. These are random numbers that are "kinda random". These are pre-generated numbers based on a seed.

```c
#include <stdio.h>
#include <stdlib.>

int main()
{
  printf("rand max: %d\n", RAND_MAX);
  srand(4567);
  for (int i = 0; i < 10; i++) {
    printf("%d\n", rand());
  }
}
```

Random numbers are useful to make game artificial intelligence (AI). The game can take different actions every time you play it.

Like Minecraft stage creation.

![Minecraft Seed](http://pad2.whstatic.com/images/thumb/6/6e/Use-Seeds-in-Minecraft-Step-3.jpg/aid5974520-v4-728px-Use-Seeds-in-Minecraft-Step-3.jpg)

## Exercise ##

Test randomness by running the random number generator many many times (like a million). Check the percentage of numbers under half of `RAND_MAX`, and over half of `RAND_MAX` (`RAND_MAX` is from the man page of `srand`).

## Exercise ##

Change the seed to see what happens.

## Exercise ##

Implement this code to get random numbers in a range:

```c
rand() % (max_number + 1 - minimum_number) + minimum_number
```

## Homework ##

Animate an explosion. Create it by using circles. Hints:

* Think about what inputs there are to the explosion. For example, the explosion has to start somewhere, and should have a size.
* Use circles. Start with a small circle, then to a big circle
* Use the function `clear()` strategically to make the explosion look better
* Try using random numbers to center your explosion at different places.
* Try different colors when the explosion reaches different sizes. For example, it could be white in the beginning, and red as it gets bigger.

## Drawing lines ##

This algorithm uses the slope of the line to find what the Y position is. Iterate on X. The current Y is a proportion of where the current X is.

```c
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
```

## Exercise ##
Implement this algorithm and test it.

## Homework ##
Write a program that draw shapes of different number of edges, up to 12. Start with 3, then draw a shape, pause for 1 second, then draw the next.
