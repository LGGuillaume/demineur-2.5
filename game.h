#ifndef GAME_H
#define GAME_H

struct Game
{
    int lines;
    int columns;
    char** board;
    int numBombs;
    char** revealed;

    Game() : lines(0), columns(0), board(nullptr), numBombs(0), revealed(nullptr) {}
    ~Game();

    void initializeGame(int& lines, int& columns);
    void displayBoard(int lines, int columns);
    void userPosition(int& enterLine, char& enterColumn, int lines, int columns);
    void placeBombs();
    bool hasHitBomb(int enterLine, char enterColumn);
    void adjacentBombs();
    void flag(int enterLine, char enterColumn);
	bool checkWin();

};

#endif
