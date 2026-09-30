#include "../include/colors.h"
#include "../include/commands.h"

#include <stdio.h>

void apply_color(enum Color color){
    printf("\033[%im",color);
}

void reset_color(){
    apply_color(RESET);
}

void print_green(int argc, char *argv[]){
    apply_color(GREEN);
    for (int i=2; i<argc; i++){
        printf("%s ",argv[i]);
    }
    printf("\n");
    reset_color();
}

static struct Command cmd_color = {
    .name = "color-green",
    .help = "Print the <args> in green",
    .execute = print_green,
    .next = NULL
};

void print_bg_green(int argc, char *argv[]){
    apply_color(BG_GREEN);
    for (int i=2; i<argc; i++){
        printf("%s ",argv[i]);
    }
    reset_color();
    printf("\n");
}

static struct Command cmd_color_bg = {
    .name = "bg-green",
    .help = "Print the <args> in a bg green",
    .execute = print_bg_green,
    .next = NULL
};

__attribute__((constructor)) static void auto_init_ping(void) {
    save_command(&cmd_color);
    save_command(&cmd_color_bg);
    
}
