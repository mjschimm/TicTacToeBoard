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
	
	if(board.toggleTurn() == O) {
		ASSERT_TRUE(false);
	}
	else {
		ASSERT_TRUE(true);
	}
}

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
