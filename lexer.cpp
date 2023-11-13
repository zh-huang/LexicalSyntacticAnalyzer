#include "lexer.h"

Lexer::Lexer(string filename) { source = filename; }

void Lexer::printTokens()
{
    for (auto &i : tokens) {
        cout << "Ln" << i.Ln << ", Col" << i.Col << "\t" << i.value << "\t"
             << TokenTypeName[i.type] << endl;
    }
}

vector<Token> Lexer::analyze(const string &filename)
{
    int Ln = 0, Col = 0;
    TokenType type;

    for (; 0;) {
        string currentToken;
        tokens.push_back({Ln, Col, type, currentToken});
    }
    return tokens;
}
