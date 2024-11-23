#include "pch.h"
#include "../JsonPP/Parser.h"

TEST(ParserTest, ShouldThrowIfFirstCharacterIsNotOpenBracket) {
	std::string trowable_text = "ahello:world}";

	EXPECT_THROW(JsonPP::Parser::parse(trowable_text), JsonPP::ParserExeption);
}

TEST(ParserTest, ShouldNotThrowIfWhiteSpaceAndNewLineAfterFirstOpenBracket) {
	std::string trowable_text = "{   \n\n\n\n   }";

	EXPECT_NO_THROW(JsonPP::Parser::parse(trowable_text));
}

TEST(ParserTest, ShouldThrowIfIsNotDefiningAKeyWithDoubleQuotes) {
	std::string trowable_text = "{'key': \"pair\" }";

	EXPECT_THROW(JsonPP::Parser::parse(trowable_text), JsonPP::ParserExeption);
}