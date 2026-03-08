#pragma once

using namespace std;

void test() {
	cout << "\033[31m" << "red" << "\033[0m";  // 0m = reset
	cout << "\033[32m" << "green" << "\033[0m";
	cout << "\033[33m" << "yellow" << "\033[0m";
	cout << "\033[34m" << "blue" << "\033[0m";
	cout << "\033[41m" << "red background" << "\033[0m";
}

enum class Tile : short {
    Empty = 0,
    Mine = 1,
    Flag = 2,
    Safe = 3
};

class Game {
private:
    int width = 45;
    int height = 16;
    vector<vector<short>> field;

public:
    static Game& getInstance() {
        static Game instance;
        return instance;
    }

    void init(int width, int height, int mines) {
        cout << "┌────────────────────────────────────────────────────────────────────────────────────┐" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                      PLEASE RESIZE THE SCREEN TO PLAY THE GAME                     │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                          L ' A R C A D E    M A G I Q U E                          │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "│                                                                                    │" << endl;
        cout << "└────────────────────────────────────────────────────────────────────────────────────┘" << endl;
        cout << "> PRESS ANY BUTTON TO CONTINUE..." << endl;
        cout << "└────────────────────────────────────────────────────────────────────────────────────┘" << endl;

        for (int h = 0; h < height; h++) {
            for (int w = 0; w < width; w++) {
                uniform_int_distribution<short> dist(0, 2);
            }
        }

        hideCursor();
    }

    void start() {
        showCursor();
        clearScreen();

        field.assign(height, vector<short>(width, 0));


        cout << "00:00" << endl;

        cout << "┌";
        for (int i = 0; i < width + 2; i++) {
            cout << "─";
        }
        cout << "┐" << endl;
        for (int i = 0; i < height - 1; i++) {
            cout << "│";
            for (int j = 0; j < width + 2; j++) {
                cout << " ";
            }
            cout << "│" << endl;
        }
        cout << "└";
        for (int i = 0; i < width + 2; i++) {
            cout << "─";
        }
        cout << "┘" << endl;

        moveCursor(3, 3);
        for (int h = 0; h < height; h++) {
            for (int w = 0; w < width; w++) {
                if (field[h][w] == 1) {
                    cout << "▨";
                }
                else if (field[h][w] == 2) {
                    cout << "▶";
                }
                else {
                    cout << "_";
                }
            }
            moveCursor(3, 3 + h);
        }
        /*
        cout << "FLAGS |" << "\033[1;45m" << "20" << "\033[0m" << endl;
        cout << "\033[1;45m" << "FIRST GAME" << "\033[0m" << endl;
        */
        moveCursor(width + 10, height + 10);
    }
private:
    Game() {}
};