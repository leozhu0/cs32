#ifndef LEXER_H
#define LEXER_H
#include <vector>
#include <iostream>
#include <fstream>
#include "token.h"
class Lexer {
    private:
        TokenType tokenType(char token);
        void pushSeq(std::string element, TokenType type, int line, int column, std::vector<Token> &sequence);
        void pushSeqThrow(std::string element, TokenType type, int line, int column, std::vector<Token> &sequence);
    public:
        std::vector<Token> lexer();
        std::vector<Token> lexer(std::string raw);
};



#endif
