#include "pch.h"
#include "../Utils.h"


// Proves comprovant valors booleans
TEST(TestUtils, Primer) {
	Utils calc;
	EXPECT_TRUE(calc.es_primer(13));
}

TEST(TestUtils, NoPrimer) {
	Utils calc;
	EXPECT_FALSE(calc.es_primer(10));
}