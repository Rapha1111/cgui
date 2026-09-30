#include <stdio.h>
#include <stddef.h>

#include "../include/gui.h"

// COLOR
void apply_color(enum Color color){
    printf("\033[%im",color);
}

void apply_rgb(int r, int g, int b){
    printf("\033[38;2;%i;%i;%im",r,g,b);
}

void apply_rgb_bg(int r, int g, int b){
    printf("\033[48;2;%i;%i;%im",r,g,b);
}


void reset_color(){
    apply_color(RESET);
}

// CLEAN
void clean(){
    printf("\033[2J");
}

// MOVE
void gotoxy(int x, int y){
    printf("\033[%d;%dH", y, x);
}

// RECT
void rectangle(int x, int y, int width, int height){
    gotoxy(x, y);
    printf("┌");

    for (int i = 0; i < width - 2; i++)
        printf("─");

    printf("┐");

    for (int j = 1; j < height - 1; j++)
    {
        gotoxy(x, y + j);
        printf("│");

        gotoxy(x + width - 1, y + j);
        printf("│");
    }

    gotoxy(x, y + height - 1);
    printf("└");

    for (int i = 0; i < width - 2; i++)
        printf("─");

    printf("┘");
}
