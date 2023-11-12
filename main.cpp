#include <iostream>

#include "lexer.h"

const int version = 5;

int main()
{
    cout << "Lexical Analyzer" << endl;
    string str1("intint");
    string str2("int");
    cout << isKeyword(str1) << endl;
    cout << isKeyword(str2) << endl;
    cout << "version = " << version << endl;
    return 0;
}