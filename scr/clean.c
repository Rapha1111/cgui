#include "../include/clean.h"
#include "../include/commands.h"

#include <stdio.h>

void clean(){
    printf("\033[2J");
}

void print_clean(int argc, char *argv[]){
    clean();
    (void)argc;
    (void)argv;
    printf("\033[5mCe texte clignote !\033[0m\n\a");
}

static struct Command cmd_clean = {
    .name = "clean",
    .help = "clean the screen",
    .execute = print_clean,
    .next = NULL
};

__attribute__((constructor)) static void auto_init_ping(void) {
    save_command(&cmd_clean);    
}
