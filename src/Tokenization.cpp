#include <iostream>
#include "Tokenization.hpp"


std::map<Tokens::TokenType, std::regex> Tokens::TokenRegex = {
    {Whitespace, std::regex("[\\s\\t\\n\\r]")},
    {Keyword, std::regex("(if|then|end|print|input|struct|arg|new)")},
    {GroupDivider, std::regex("(\\[|\\])")},
    {Logical, std::regex("true|false")},
    {Numeric, std::regex("[0-9]+")},
    {Text, std::regex("\"([^\"]*)\"")},
    {Variable, std::regex("[a-zA-Z_]+[a-zA-Z0-9_]*")},
    {Operator, std::regex("(\\+|\\-|\\>|\\<|\\={1,2}|\\!|\\:{2})")}
};

class Tokenization {
    public:
        static Tokens::TokenType getTokenType (const std::string& token) {
            for (const auto& tokenType : Tokens::TokenRegex) {
                bool token_match = false;
                //tokenType.first enum value (key)
                //tokenType.second std::regex object (value)
                if (std::regex_match (token, tokenType.second)) {
                    return tokenType.first;
                    break;
                }
            }
            throw std::runtime_error ("No matching token found");
        }
};