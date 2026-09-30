#include <stdio.h>
#include "../include/commands.h"
#include "../include/colors.h"


void gotoxy(int x, int y){
    printf("\033[%d;%dH", y, x);
}

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

void print_rect(int argc, char *argv[]){
    apply_color(RED);
    rectangle(10,10,10,3);
    (void)argc;
    (void)argv;
}

static struct Command cmd_rect = {
    .name = "rect-example",
    .help = "draw a rectangle as example",
    .execute = print_rect,
    .next = NULL
};

__attribute__((constructor)) static void auto_init_ping(void) {
    save_command(&cmd_rect);    
}

