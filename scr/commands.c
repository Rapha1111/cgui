#include "../include/commands.h"
#include <stddef.h>

struct Command *commands = NULL;

void save_command(struct Command *cmd) {
    if (cmd == NULL) return;
    
    cmd->next = commands;
    commands = cmd;
}