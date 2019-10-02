//
// Created by student on 21/09/19.
//

#ifndef TICTACTOE_CHECKMOVE_H
#define TICTACTOE_CHECKMOVE_H

#endif //TICTACTOE_CHECKMOVE_H

bool userMoveCheck(int userInput, char (*gridPtr)[3][3], char userLetter, char compLetter);

bool compMoveCheck(char (*gridPtr)[3][3],int row, int col, char userLetter, char compLetter);