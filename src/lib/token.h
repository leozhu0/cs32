//#pragma once
#ifndef TOKEN_H
#define TOKEN_H
#include <string>

enum TokenType {
  NUMBER,
  OPERATOR,
  PARENTHESIS,
  END,
  NULLTYPE,
  SPACE,
  VARIABLE,
  ASSIGNMENT,
  LOGIC,
  COMPARE,
  COMMAND,
  BLOCK,
  BOOL,
  COMMA,
  SEMICOLON,
  RETURN,
  FUNCTION,
  BRACKET,
  NILL
};

class Token {
  public:  
    static TokenType tokenType(char token);
    int line;
    int column;
    std::string token;
    TokenType type;
  
};
#endif
