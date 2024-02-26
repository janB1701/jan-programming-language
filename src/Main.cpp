#include "Tokenization.hpp"
#include <iostream>

class Main {
    public:
        void run () {
            //Tokenization tokenizer;

            Tokens::TokenType tokenType = Tokens::getTokenType ("if");

            std::cout << "Token type: " << tokenType << std::endl;
        }
};

int main () {
    Main main;
    main.run();
    return 0;
}