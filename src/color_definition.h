#ifndef COLOR_IO_COLOR_DEFINITION_H
#define COLOR_IO_COLOR_DEFINITION_H


// Set
#define BOLD             "\e[1m"
#define UNDERLINE        "\e[4m"
#define BLINK            "\e[5m"
#define INVERSE          "\e[7m"
#define HIDDEN           "\e[8m"


// Reset
#define RE_ALL        "\e[0m"

#define RE_BOLD       "\e[21m"
#define RE_UNDERLINE  "\e[24m"
#define RE_BLINK      "\e[25m"
#define RE_INVERSE    "\e[27m"
#define RE_HIDDEN     "\e[28m"


// Foreground (text)
#define FG_DEFAULT       "\e[39m"
#define FG_BLACK         "\e[30m"
#define FG_RED           "\e[31m"
#define FG_GREEN         "\e[32m"
#define FG_YELLOW        "\e[33m"
#define FG_BLUE          "\e[34m"
#define FG_MAGENTA       "\e[35m"
#define FG_CYAN          "\e[36m"
#define FG_LGRAY         "\e[37m"

#define FG_DGRAY         "\e[90m"
#define FG_LRED          "\e[91m"
#define FG_LGREEN        "\e[92m"
#define FG_LYELLOW       "\e[93m"
#define FG_LBLUE         "\e[94m"
#define FG_LMAGENTA      "\e[95m"
#define FG_LCYAN         "\e[96m"
#define FG_WHITE         "\e[97m"


// Background
#define BG_DEFAULT       "\e[49m"
#define BG_BLACK         "\e[40m"
#define BG_RED           "\e[41m"
#define BG_GREEN         "\e[42m"
#define BG_YELLOW        "\e[43m"
#define BG_BLUE          "\e[44m"
#define BG_MAGENTA       "\e[45m"
#define BG_CYAN          "\e[46m"
#define BG_LGRAY         "\e[47m"

#define BG_DGRAY         "\e[100m"
#define BG_LRED          "\e[101m"
#define BG_LGREEN        "\e[102m"
#define BG_LYELLOW       "\e[103m"
#define BG_LBLUE         "\e[104m"
#define BG_LMAGENTA      "\e[105m"
#define BG_LCYAN         "\e[106m"
#define BG_WHITE         "\e[107m"

#endif

