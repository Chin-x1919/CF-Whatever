#include <ncurses.h>
#include <stdlib.h>

int main() {
    initscr();              // start ncurses
    noecho();               // no echo when type something
    cbreak();               // input

    int choice;
    char *options[] = {
        "1. About this OS",
        "2. Show Time",
        "3. Let me out of here i'll use terminal myself"
    };
    int n_options = sizeof(options) / sizeof(char*);

    while (1) {
        clear();
        mvprintw(0, 0, "menu CF-Whatever (Demo)\n");
        for (int i = 0; i < n_options; i++) {
            mvprintw(i+1, 2, "%s", options[i]);
        }
        mvprintw(n_options+2, 0, "select menu (1-%d): ", n_options);

        choice = getch();
        clear();
        if (choice == '1') {
            // ASCII Art
            mvprintw(0, 0,
            "  ____ _____    ____  ____   _    ____ _____ \n"
            " / ___|  ___|  / ___||  _ \\ / \\  / ___| ____|\n"
            "| |   | |_ ____\\___ \\| |_) / _ \\| |   |  _|  \n"
            "| |___|  _|_____|__) |  __/ ___ \\ |___| |___ \n"
            " \\____|_|      |____/|_| /_/   \\_\\____|_____|\n");

            // about
            mvprintw(6, 0, "Welcome To CF-Whatever");
            mvprintw(7, 0, "An experimental core os for CF-Space Project.");
            mvprintw(8, 0, "Why? Because nobody asked for it, but it exists anyway.");
        } else if (choice == '2') {
            mvprintw(0, 0, "SystemTime:\n");
            refresh();
            system("date");   // Show system date
        } else if (choice == '3') {
            endwin();
            system("/bin/sh"); // Launch shell
            return 0;
        } else {
            mvprintw(0, 0, "BOX NOW BOX NOW STAY OUT!!!");
            mvprintw(1, 0, "Use 1, 2, or 3");
        }
        mvprintw(15, 0, "Press any key...");
        getch();
    }

    endwin();
    return 0;
}
