#include "TicTacToeBoard.h"
/**
 * Class for representing a 3x3 Tic-Tac-Toe game board, using the Piece enum
 * to represent the spaces on the board.
**/

//Constructor sets an empty board and specifies it is X's turn first
TicTacToeBoard::TicTacToeBoard()
{
  turn = X;
  for(int i=0; i<BOARDSIZE; i++)
    for(int j=0; j<BOARDSIZE; j++)
      board[i][j] = Blank;
}

/**
 * Switches turn member variable to represent whether it's X's or O's turn
 * and returns whose turn it is
**/
/* 
BUG: Everytime we toggleTurn(), the turn of the piece should always be set to the opposite
of what it currently is. If current turn is "O", then toggle turn should set the turn as "X" and return "X".
The issue with this bug is that we return the opposite of what the current turn is (which
is correct), but we do not always set the turn to the opposite of the current turn.
So everytime the current turn is "O", we return "X" correctly, but do not actually switch the turn.
*/
Piece TicTacToeBoard::toggleTurn()
{
  if(turn == X) {
    turn = O;
    return O;
  }
  else {
    turn = X;
    return X;
  }
}

/**
 * Places the piece of the current turn on the board, returns what
 * piece is placed, and toggles which Piece's turn it is. placePiece does 
 * NOT allow to place a piece in a location where there is already a piece.
 * In that case, placePiece just returns what is already at that location. 
 * Out of bounds coordinates return the Piece Invalid value. When the game
 * is over, no more pieces can be placed so attempting to place a piece
 * should neither change the board nor change whose turn it is.
**/ 
Piece TicTacToeBoard::placePiece(int row, int column)
{
  if(getWinner() == X || getWinner() == O || getWinner() == Blank) {
    return Invalid;
  }
  else if (row >= BOARDSIZE || column >= BOARDSIZE || row < 0 || column < 0) {
    return Invalid;
  }
  else {
    if(board[row][column] == Blank) {
      board[row][column] = turn;
      toggleTurn();
      return board[row][column];
    }
    else {
      return board[row][column];
    }
  }
}

/**
 * Returns what piece is at the provided coordinates, or Blank if there
 * are no pieces there, or Invalid if the coordinates are out of bounds
**/
Piece TicTacToeBoard::getPiece(int row, int column)
{
  if(row >= BOARDSIZE || column >= BOARDSIZE || row < 0 || column < 0) {
    return Invalid;
  }
  else {
    return board[row][column];
  }
}

/**
 * Returns which Piece has won, if there is a winner, Invalid if the game
 * is not over, or Blank if the board is filled and no one has won.
**/
Piece TicTacToeBoard::getWinner()
{
  if((board[0][0] == X && board[0][1] == X && board[0][2] == X)
  || (board[1][0] == X && board[1][1] == X && board[1][2] == X)
  || (board[2][0] == X && board[2][1] == X && board[2][2] == X)
  || (board[0][0] == X && board[1][0] == X && board[2][0] == X)
  || (board[0][1] == X && board[1][1] == X && board[2][1] == X)
  || (board[0][2] == X && board[1][2] == X && board[2][2] == X)
  || (board[0][0] == X && board[1][1] == X && board[2][2] == X)
  || (board[0][2] == X && board[1][1] == X && board[2][0] == X)) {
    return X;
  }
  if((board[0][0] == O && board[0][1] == O && board[0][2] == O)
  || (board[1][0] == O && board[1][1] == O && board[1][2] == O)
  || (board[2][0] == O && board[2][1] == O && board[2][2] == O)
  || (board[0][0] == O && board[1][0] == O && board[2][0] == O)
  || (board[0][1] == O && board[1][1] == O && board[2][1] == O)
  || (board[0][2] == O && board[1][2] == O && board[2][2] == O)
  || (board[0][0] == O && board[1][1] == O && board[2][2] == O)
  || (board[0][2] == O && board[1][1] == O && board[2][0] == O)) {
    return O;
  }
  bool board_is_full = true;
  for(int i=0; i<BOARDSIZE; i++) {
    for(int j=0; j<BOARDSIZE; j++) {
      if(board[i][j] == Blank) {
        board_is_full = false;
      }
    }
  }
  if(board_is_full == false) {
    return Invalid;
  }
  else {
    return Blank;
  }
}
