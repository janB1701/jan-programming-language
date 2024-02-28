#include "Tokenization.hpp"
#include <iostream>

int main () {
    Tokenizer tokenizer;

    Tokenizer::TokenType tokenType = tokenizer.getTokenType ("if");

    std::cout << "Token type: " << tokenType << std::endl;
    return 0;
}