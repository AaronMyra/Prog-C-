//
// Created by student on 21/09/19.
//

#include "Block.h"
#include "CheckMove.h"

//void checkBlock(char (*gridPtr)[3][3], char userLetter, char compLetter ){}

bool checkBlockCol(char userLetter, char (*gridPtr)[3][3],int row, int col, char compLetter, char *compMovePtr){

    if((*gridPtr)[row + 1][col] == userLetter && ((*gridPtr)[row][col] == userLetter || (*gridPtr)[row + 2][col] == userLetter)) {

        if ((*gridPtr)[row + 1][col] == userLetter && (*gridPtr)[row][col] == userLetter) {
            if (compMoveCheck(gridPtr, (row + 2), col, userLetter, compLetter)) {
                *compMovePtr = (*gridPtr)[row + 2][col];
                (*gridPtr)[row + 2][col] = compLetter;
                return true;
            }
        }

        else if ((*gridPtr)[row + 1][col] == userLetter && (*gridPtr)[row + 2][col] == userLetter) {
            if (compMoveCheck(gridPtr, row, col, userLetter, compLetter)) {
                *compMovePtr = (*gridPtr)[row][col];
                (*gridPtr)[row][col] = compLetter;
                return true;
            }
        }

        else {
            return false;
        }

    }

    else if ((*gridPtr)[row][col] == userLetter && (*gridPtr)[row + 2][col] == userLetter){
        if(compMoveCheck(gridPtr, (row + 1), col, userLetter, compLetter)){
            *compMovePtr = (*gridPtr)[row + 1][col];
            (*gridPtr)[row + 1][col] = compLetter;
        }
    }

    else {
        return false;
    }

}

bool checkBlockRow(char userLetter, char (*gridPtr)[3][3],int row, int col, char compLetter, char *compMovePtr){

    if((*gridPtr)[row][col + 1] == userLetter && ((*gridPtr)[row][col] == userLetter || (*gridPtr)[row][col + 2] == userLetter)){

        if ((*gridPtr)[row][col + 1] == userLetter && (*gridPtr)[row][col] == userLetter) {
            if (compMoveCheck(gridPtr, row, (col + 2), userLetter, compLetter)) {
                *compMovePtr =(*gridPtr)[row][col + 2];
                (*gridPtr)[row][col + 2] = compLetter;
                return true;
            }
        }

        else if ((*gridPtr)[row][col + 1] == userLetter && (*gridPtr)[row][col + 2] == userLetter) {
            if (compMoveCheck(gridPtr, row, col, userLetter, compLetter)) {
                *compMovePtr = (*gridPtr)[row][col];
                (*gridPtr)[row][col] = compLetter;
                return true;
            }
        }

        else {
            return false;
        }
    }

    else if ((*gridPtr)[row][col] == userLetter && (*gridPtr)[row ][col + 2] == userLetter){
        if(compMoveCheck(gridPtr, row, (col + 1), userLetter, compLetter)){
            *compMovePtr = (*gridPtr)[row ][col + 1];
            (*gridPtr)[row ][col + 1] = compLetter;
        }
    }

    else {
        return false;
    }
}

bool checkBlockDiagonal(char userLetter, char (*gridPtr)[3][3], char compLetter, char *compMovePtr){

    if((*gridPtr)[1][1] == userLetter && ((*gridPtr)[0][0] == userLetter || (*gridPtr)[2][2] == userLetter)){

        if (compMoveCheck(gridPtr, 0, 0, userLetter, compLetter)){
            *compMovePtr = (*gridPtr)[0][0];
            (*gridPtr)[0][0] = compLetter;
            return true;
        }

        else if (compMoveCheck(gridPtr, 2, 2, userLetter, compLetter)){
            *compMovePtr = (*gridPtr)[2][2];
            (*gridPtr)[2][2] = compLetter;
            return true;
        }

        else {
            return false;
        }
    }

    else if((*gridPtr)[1][1] == userLetter && ((*gridPtr)[2][0] == userLetter || (*gridPtr)[0][2] == userLetter)){

        if (compMoveCheck(gridPtr, 2, 0, userLetter, compLetter)){
            *compMovePtr = (*gridPtr)[2][0];
            (*gridPtr)[2][0] = compLetter;
            return true;
        }

        else if (compMoveCheck(gridPtr, 0, 2, userLetter, compLetter)){
            *compMovePtr = (*gridPtr)[0][2];
            (*gridPtr)[0][2] = compLetter;
            return true;
        }

        else {
            return false;
        }
    }

    else {
        return false;
    }
}

bool checkBlock(char (*gridPtr)[3][3], char userLetter, char compLetter, char *compMovePtr){

    //Iterates through columns
    for(int i = 0; i < 3; i++ ){

        if(checkBlockCol(userLetter, gridPtr, 0, i, compLetter, compMovePtr)){
            return true;
        }
    }

    //Iterates through rows
    for(int i = 0; i < 3; i++ ){

        if(checkBlockRow(userLetter, gridPtr, i, 0, compLetter, compMovePtr)){
            return true;
        }
    }

    if(checkBlockDiagonal(userLetter, gridPtr, compLetter, compMovePtr)){
        return true;
    }

    else{
        return false;
    }
}