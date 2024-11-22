#pragma once
#include <string>
#include <iterator>
#include <map>
#include <any>
namespace JsonPP {
	static class Parser
	{
	public:
		static void parse(std::string text);

	private:
		std::map<std::string, std::any> values;
	};

	class ParserExeption : public std::exception {
	public:
		ParserExeption(const std::string msg) : message(msg) {}
		const char* what() const noexcept override {
			return message.c_str();
		}
	private:
		std::string message;
	};
}


