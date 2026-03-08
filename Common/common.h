#pragma once

#include <iostream>
#include <vector>
#include <random>

#ifdef _WIN32
    #include <conio.h>
    #include <windows.h>
#else
    #include <termios.h>
    #include <unistd.h>
    #include <sys/select.h>
#endif

using namespace std;

bool is_key_pressed() {
    #ifdef _WIN32
        return _kbhit();
    #else
        struct timeval tv = { 0, 0 };
        fd_set fds;
        FD_ZERO(&fds);
        FD_SET(STDIN_FILENO, &fds);
        return select(1, &fds, nullptr, nullptr, &tv) > 0;
    #endif
}

void say_hi(string gamename) {
	cout << "Welcome to " << gamename << " from L'Arcade Magique." << endl;
}

void make_new_screen() {
    cout << "\033[2J";
}

#ifdef _WIN32
void clear_screen() {
    system("cls");
}
#else
void clear_screen() {
    cout << "\033[3J\033[1; 1H";
}
#endif

void move_cursor(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}
void hide_cursor() {
    cout << "\033[?25l";
}
void show_cursor() {
    cout << "\033[?25h";
}