#include "pch.h"
#include "../TDD/prime-factors.cpp"
using namespace std;



TEST_F(PrimeFixture, Of1) {
	PrimeFactor primeFactor;
	vector<int> expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
}


