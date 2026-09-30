#ifndef COMMANDS_H
#define COMMANDS_H

struct Command{
    char *name;
    char *help;
    void (*execute)(int argc, char *argv[]);

    struct Command *next;
};

extern struct Command *commands;

void save_command(struct Command *cmd);



#endif