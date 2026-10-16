/*
My BNF:

<palindrome>    ::= a <palindrome> a | b <palindrome> b | ... z <palindrome> z |
                    A <palindrome> A | ... Z <palindrome> Z | char | ε
                    
<char>          :: = a | b | ... | z | A | B | ... | Z

*/