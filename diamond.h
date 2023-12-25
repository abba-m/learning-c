// if not defined DIAMOND_H
#ifndef DIAMOND_H
#define DIAMOND_H

void diamond();
void welcome_scrn(char name[]);

#define SMALLPAUSE nanosleep((const struct timespec[]){{0, 2000000}}, NULL);
#define clear() printf("\033[H\033[J");

#define MAIN_MENU_TEXT "Welcome to Diamond Schools!\n\n" \
             "\"%s\" is logged in.\n\n" \
             "1. Add Student\n" \
             "2. Display Students\n" \
             "3. Search Student\n" \
             "4. Exit\n\n\n" \
             "Enter your choice: "

// end ifndef
#endif