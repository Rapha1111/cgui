#include <stdio.h>

#ifndef GUI_H
#define GUI_H

// COLOR
enum Color {
    // Spécial
    RESET = 0,
    
    // text effects
    BOLD,
    DIM,
    ITALIC,
    UNDERLINE,
    BLINK,
    FAST_BLINK,
    INVERT,
    INVISIBLE,
    STEIKETHROUGH,
    DOUBLE_UNDERLINE = 21,

    // resets
    NORMAL,
    NO_ITALIC,
    NO_UNDERLINE,
    NO_BLINK,
    NO_INVERT,
    NO_INVISIBLE,
    NO_STEIKETHROUGH,

    // colors
    BLACK = 30,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE,

    // backgrounds
    BG_BLACK = 40,
    BG_RED,
    BG_GREEN,
    BG_YELLOW,
    BG_BLUE,
    BG_MAGENTA,
    BG_CYAN,
    BG_WHITE,

    // bright colors
    BRIGHT_BLACK = 90,
    BRIGHT_RED,
    BRIGHT_GREEN,
    BRIGHT_YELLOW,
    BRIGHT_BLUE,
    BRIGHT_MAGENTA,
    BRIGHT_CYAN,
    BRIGHT_WHITE,

    // bright backgrounds
    BG_BRIGHT_BLACK = 100,
    BG_BRIGHT_RED,
    BG_BRIGHT_GREEN,
    BG_BRIGHT_YELLOW,
    BG_BRIGHT_BLUE,
    BG_BRIGHT_MAGENTA,
    BG_BRIGHT_CYAN,
    BG_BRIGHT_WHITE
};
void apply_color(enum Color color);
void apply_rgb(int r, int g, int b);
void apply_rgb_bg(int r, int g, int b);
void reset_color();

//CLEAN
void clean();

//MOUVE
void gotoxy(int x, int y);

//RECT
void rectangle(int x, int y, int width, int height);

#endif