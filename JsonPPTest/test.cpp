#include "pch.h"
#include "../JsonPP/Parser.h"

TEST(ParserTest, ThrowIfFirstCharacterIsNotOpenBracket) {
	std::string trowable_text = "ahello:world}";

	EXPECT_THROW(JsonPP::Parser::parse(trowable_text), JsonPP::ParserExeption);
}