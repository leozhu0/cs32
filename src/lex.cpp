#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include "lib/lexer.h"

int main() {
    try{
        Lexer lexer = Lexer();
        std::vector<Token> seq= lexer.lexer();
        for(int i = 0; i < (int)(seq.size()); i++){
            std::cout << std::right << std::setw(4) << seq.at(i).line << std::right << std::setw(5) << seq.at(i).column << "  " << seq.at(i).token<<std::endl;
        }
    } catch (const std::exception& e) {
      std::cout << e.what() << std::endl;
      exit(1);
    }


    return 0;
}
