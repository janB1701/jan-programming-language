#ifndef TOKENIZATION_HPP
#define TOKENIZATION_HPP

#include <regex>
#include <map>

struct Token {
    enum Type {
        Identifier,
        Operator,
        Keyword,
    };

    Type type;
    std::string value;
};

class Tokenizer {
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

    TokenType getTokenType (const std::string& token);
    
    void tokenize(const std::string &input);

    std::vector<Token> getTokens();

    private:
    std::vector<Token> _tokens;
};

#endif