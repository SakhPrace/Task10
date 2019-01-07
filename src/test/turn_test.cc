#include <gtest/gtest.h>
#include "turn/geometricVector.h"

TEST(turn, turn90){
	std::pair<int, int> A = std::make_pair(0, 0);
	std::pair<int, int> B = std::make_pair(2, 1);
	geomVector<int> vect(A, B);
	vect.turn90(90);
	EXPECT_EQ(vect.getB().first, -1);
	EXPECT_EQ(vect.getB().second, 2);
}

TEST(turn, turn360){
	std::pair<int, int> A = std::make_pair(0, 0);
	std::pair<int, int> B = std::make_pair(2, 1);
	geomVector<int> vect(A, B);
	vect.turn90(360);
	EXPECT_EQ(vect.getB().first, 2);
	EXPECT_EQ(vect.getB().second, 1);
}

TEST(turn, turn_90){
	std::pair<int, int> A = std::make_pair(0, 0);
	std::pair<int, int> B = std::make_pair(2, 1);
	geomVector<int> vect(A, B);
	vect.turn90(-90);
	EXPECT_EQ(vect.getB().first, 1);
	EXPECT_EQ(vect.getB().second, -2);
}

TEST(turn, turnNOT90){
	std::pair<int, int> A = std::make_pair(0, 0);
	std::pair<int, int> B = std::make_pair(2, 1);
	geomVector<int> vect(A, B);
	vect.turn90(100);
	EXPECT_EQ(vect.getB().first, 2);
	EXPECT_EQ(vect.getB().second, 1);
}






