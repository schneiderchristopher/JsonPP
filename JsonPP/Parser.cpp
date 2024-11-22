#include "Parser.h"

void JsonPP::Parser::parse(std::string text)
{
	char current = 0;
	std::string key_value;

	for (auto i = text.begin(); i != text.end(); ++i) {
		current = *i;
		size_t index = std::distance(text.begin(), i);
		if (index == 0 && current != '{') {
			throw ParserExeption("Invalid Json, first character is not open bracket");
		}
	}
}
