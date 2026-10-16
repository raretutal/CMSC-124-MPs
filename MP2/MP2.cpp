/*
My BNF:

<program>   ::= <expr>$
<expr>      ::= <expr>+<unary> | <expr>-<unary> | <unary>
<unary>     ::= ~<unary> | <primary>
<primary>   ::= (<expr>) | var
<var>       ::= x | y | z

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool parse_expr(const char*& s);

bool parse_primary(const char*& s) {
    if(*s == 'x' || *s == 'y' || *s == 'z'){
        s++;
        return true;
    }
    if (*s == '(') {
        s++;
        if(!parse_expr(s) || *s != ')') return false;

        s++;
        return true;
    }
    return false;
}

bool parse_unary(const char*& s){
    if (*s == '~') {
        s++;
        return parse_unary(s);
    }
    return parse_primary(s);
}

bool parse_expr(const char*& s){
    if (!parse_unary(s)) return false;

    while (*s == '+' || *s == '-') {
        s++;
        if (!parse_unary(s)) return false;
    }
    return true;
}

bool is_valid(const std::string& input){
    const char* s = input.c_str();
    return parse_expr(s) && *s == '$' && *(s + 1) == '\0';
}

int main() {
    string input;
    cin >> input;
    
    cout << (is_valid(input)? "VALID" : "INVALID");

    return 0;
}