Write a syntactic specification using _Backus-Naur Form_ (BNF) to describe the mini-language with the following description: The grammar should accept simple expressions limited to the variable identifiers x, y, or z, that contain the operations of addition (+), subtraction (-), and unary negation (~) together with parentheses. Terminate each expression with a '$'. Include in your source code (as comments) your grammar definition.

**IMPORTANT:** in your source code, comment your actual BNF grammar since it will be checked it as well. Also make sure your implementation follows your BNF grammar definition

**Valid strings:**
~x+~y$
(x+z-y)$
z-(x+y)$
(((x+y)-z)-x)-y+z$

**Invalid strings:**
a+b$
xy-xz$
z(x+y)$
z-(x+y)
x+(x-x$