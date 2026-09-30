#ifndef COLORS_H
#define COLORS_H

enum Color {
    // Spécial
    RESET           = 0,

    // Couleurs de texte standards (Normal)
    BLACK      = 30,
    RED        = 31,
    GREEN      = 32,
    YELLOW     = 33,
    BLUE       = 34,
    MAGENTA    = 35,
    CYAN       = 36,
    WHITE      = 37,

    // Couleurs d'arrière-plan standards (Normal Background)
    BG_BLACK        = 40,
    BG_RED          = 41,
    BG_GREEN        = 42,
    BG_YELLOW       = 43,
    BG_BLUE         = 44,
    BG_MAGENTA      = 45,
    BG_CYAN         = 46,
    BG_WHITE        = 47,

    // Couleurs de texte haute intensité (Bright/Lamineux)
    BRIGHT_BLACK   = 90,
    BRIGHT_RED     = 91,
    BRIGHT_GREEN   = 92,
    BRIGHT_YELLOW  = 93,
    BRIGHT_BLUE    = 94,
    BRIGHT_MAGENTA = 95,
    BRIGHT_CYAN    = 96,
    BRIGHT_WHITE   = 97,

    // Couleurs d'arrière-plan haute intensité (Bright Background)
    BG_BRIGHT_BLACK     = 100,
    BG_BRIGHT_RED       = 101,
    BG_BRIGHT_GREEN     = 102,
    BG_BRIGHT_YELLOW    = 103,
    BG_BRIGHT_BLUE      = 104,
    BG_BRIGHT_MAGENTA   = 105,
    BG_BRIGHT_CYAN      = 106,
    BG_BRIGHT_WHITE     = 107
};
void apply_color(enum Color color);
void reset_color();

#endif