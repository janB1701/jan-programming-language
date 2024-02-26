#ifndef TOKENIZATION_HPP
#define TOKENIZATION_HPP

#include <regex>
#include <map>


class Tokens {
public:
    enum TokenType {
        Whitespace,
        Keyword,
        GroupDivider,
        Logical,
        Numeric,
        Text,
        Variable,
        Operator
    };

    static std::map<TokenType, std::regex> TokenRegex;

    static TokenType getTokenType (const std::string& token);
};

#endif