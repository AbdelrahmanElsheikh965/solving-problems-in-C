#include <stdio.h>
#include <ncurses.h>

int main() {
    initscr(); // Initialize ncurses
    noecho(); // Disable automatic echoing of characters

    int ch = getch(); // Read a single character

    if (ch == KEY_RIGHT) {
        printf("Right arrow key pressed!\n");
    } else {
        printf("A different key was pressed.\n");
    }

    endwin(); // End ncurses

    return 0;
}
