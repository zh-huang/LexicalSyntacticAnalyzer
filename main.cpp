#include <iostream>

#include "lexer.h"

const int version = 7;

int main()
{
    string file = "..\\test1.txt";
    Lexer lexer(file);
    lexer.analyze();
    lexer.printTokens();

    cout << "version = " << version << endl;
    return 0;
}