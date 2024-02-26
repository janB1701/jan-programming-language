#include <regex>

#ifndef TOKENS_HPP
#define TOKENS_HPP

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

    std::map<TokenType, std::regex> TokenRegex = {
        {Whitespace, std::regex("[\\s\\t\\n\\r]")},
        {Keyword, std::regex ("(if|then|end|print|input|struct|arg|new)")},
        {GroupDivider, std::regex ("(\\[|\\])")},
        {Logical, std::regex ("true|false")},
        {Numeric, std::regex ("[0-9]+")},
        {Text, std::regex("\"([^\"]*)\"")},                                    
        {Variable, std::regex("[a-zA-Z_]+[a-zA-Z0-9_]*")},                      
        {Operator, std::regex("(\\+|\\-|\\>|\\<|\\={1,2}|\\!|\\:{2})")}
    }

    static Tokentype getTokenType (const std::string& token);
};

#endif