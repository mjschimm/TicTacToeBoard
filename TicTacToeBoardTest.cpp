/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/*EXAMPLE TEST FORMAT*/
TEST(TicTacToeBoardTest, SanityCheck)
{
	TicTacToeBoard board;
	if(board.toggleTurn() == O) {
		ASSERT_TRUE(true);
	}
	else {
		ASSERT_TRUE(false);
	}
	
	if(board.toggleTurn() == X) {
		ASSERT_TRUE(true);
	}
	else {
		ASSERT_TRUE(false);
	}
}

/*
BUG: Everytime we toggleTurn(), the turn of the piece should always be set to the opposite
of what it currently is. If current turn is "O", then toggle turn should set the turn as "X" and return "X".
The issue with this bug is that we return the opposite of what the current turn is (which
is correct), but we do not always set the turn to the opposite of the current turn.
So everytime the current turn is "O", we return "X" correctly, but do not actually switch the turn.
*/
TEST(TicTacToeBoardTest0, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(2, 1) != Blank) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest01, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(1, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(2, 1) != Blank) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest02, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(1, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(2, 1) != Blank) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest03, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(2, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(2, 1) != Blank) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest003, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(2, 3) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(3, 2) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(-1, 2) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, -1) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 4) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(4, 2) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(4, 4) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(4, -1) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(-1, 4) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(3, 3) != Invalid) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest04, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(1, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != X) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(2, 1) != O) {
		ASSERT_TRUE(false);
	}
}
TEST(TicTacToeBoardTest05, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(2, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != X) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(2, 1) != X) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest005, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != X) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest015, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != X) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest025, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(0, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != X) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest06, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(0, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != X) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(2, 1) != X) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest07, SanityCheck)
{
	TicTacToeBoard board;
	if(board.toggleTurn() != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != O) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(2, 2) != X) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest007, SanityCheck)
{
	TicTacToeBoard board;
	if(board.toggleTurn() != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != O) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest017, SanityCheck)
{
	TicTacToeBoard board;
	if(board.toggleTurn() != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != O) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest027, SanityCheck)
{
	TicTacToeBoard board;
	if(board.toggleTurn() != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != O) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest08, SanityCheck)
{
	TicTacToeBoard board;
	if(board.toggleTurn() != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != O) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(2, 2) != X) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest09, SanityCheck)
{
	TicTacToeBoard board;
	if(board.toggleTurn() != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != O) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(2, 2) != O) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest1, SanityCheck)
{
	TicTacToeBoard board;
	if(board.placePiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != Blank) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() == Invalid) {
		ASSERT_TRUE(false);
	}
}



TEST(TicTacToeBoardTest2, SanityCheck)
{
	TicTacToeBoard board;
	
	if(board.getPiece(0, 3) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(0, 0) != Blank) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != Invalid) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest10, SanityCheck)
{
	TicTacToeBoard board;
	
	if(board.getPiece(0, 3) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(0, 0) != Blank) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != Invalid) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest11, SanityCheck)
{
	TicTacToeBoard board;
	
	if(board.getPiece(0, 3) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(0, 0) != Blank) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != Invalid) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest12, SanityCheck)
{
	TicTacToeBoard board;
	
	if(board.getPiece(0, 3) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(0, 0) != Blank) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != Invalid) {
		ASSERT_TRUE(false);
	}
}

TEST(TicTacToeBoardTest3, SanityCheck)
{
	TicTacToeBoard board;
	
	if(board.getPiece(-1, 2) != Invalid) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(0, 0) != Blank) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 1) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(2, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 0) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getPiece(1, 2) != Blank) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 2) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 1) != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != O) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(0, 2) != X) {
		ASSERT_TRUE(false);
	}
	if(board.getWinner() != X) {
		ASSERT_TRUE(false);
	}
	if(board.placePiece(1, 0) != Invalid) {
		ASSERT_TRUE(false);
	}
}
