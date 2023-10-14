#include <string>

enum TokenType {
  NUMBER,
  OPERATOR,
  PARENTHESIS,
  END,
  NULLTYPE,
  SPACE,
};

class Token {
  public:   
    int line;
    int column;
    std::string token;
    TokenType type;

  // add functions if need be for lexer
  
};
