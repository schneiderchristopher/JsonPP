#include "Parser.h"

void JsonPP::Parser::parse(std::string& text)
{
	char current = 0;
	char last = 0;
	std::string key_value;

	for (auto i = text.begin(); i != text.end(); ++i) {
		current = *i;
		size_t index = std::distance(text.begin(), i);
		if (index == 0 && current != '{') {
			throw ParserExeption("Invalid Json, first character is not open bracket");
		}

		if (last == '{' && current == '\n' || current == ' ') {
			continue;
		}
		else if (last == '{' && current == '}') {
			break;
		}
		else if (last == '{' && current != '\"') {
			throw ParserExeption("Invalid Json, when defining a key it should be double quotes.");
		}

		last = current;
	}
}
