#include "../include/colors.h"
#include "../include/commands.h"

#include <stdio.h>
#include <string.h>

void uk_cmd(char *c){
    putchar('\n');
    apply_color(RED);
    printf("Unknown Command !\n");
    reset_color();
    printf("Type : ");
    apply_color(GREEN);
    printf("%s help", c);
    reset_color();
    printf(" to see all availble commands !\n\n");
}

int main(int argc,char *argv[]){
    if (argc<2){
        printf("\nUsage : ");
        apply_color(GREEN);
        printf("%s <command> <extra>\n", argv[0]);
        reset_color();
        printf("Type ");
        apply_color(GREEN);
        printf("%s help", argv[0]);
        reset_color();
        printf(" for help\n\n");
        return 0;
    }
    if (!strcmp(argv[1], "help")){
        if (argc==2){
            printf("\nUsage : ");
            apply_color(GREEN);
            printf("%s help <command>\n", argv[0]);
            reset_color();
            printf("Avaible commands : \n");
            apply_color(YELLOW);
            for (struct Command *a=commands; a; a=a->next){
                printf(" - %s\n", a->name);
            }
            reset_color();
            putchar('\n');
            return 0;
        }
        for (struct Command *a=commands; a; a=a->next){
            if (!strcmp(argv[2], a->name)){
                printf("\nUsage of ");
                apply_color(YELLOW);
                printf("%s", a->name);
                reset_color();
                printf(" command :\n%s\n\n", a->help);

                return 0;
            }
        }
        uk_cmd(argv[0]);
        return 1;

    }
    
    for (struct Command *a=commands; a; a=a->next){
        if (!strcmp(argv[1], a->name)){
            a->execute(argc, argv);
            return 0;
        }
    }
    uk_cmd(argv[0]);
    return 1;

    
}