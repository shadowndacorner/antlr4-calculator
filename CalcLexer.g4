// TODO
lexer grammar CalcLexer;

PI				: 'pi';
SIN				: 'sin';
COS				: 'cos';
TAN				: 'tan';
SQRT			: 'sqrt';
LPAREN			: '(';
RPAREN			: ')';
ADD				: '+';
SUB				: '-';
MULT			: '*';
EXP				: '^';
DIV				: '/';

DecimalLiteral
	: [0-9] [0-9]*
;

FloatLiteral
	: DECIMALS ('.' DECIMALS? EXPONENT? | EXPONENT)
    | '.' DECIMALS EXPONENT?
;

fragment DECIMALS
	: [0-9]+
	;

fragment OCTAL_DIGIT
	: [0-7]
	;

fragment EXPONENT
	: [eE] [+-]? DECIMALS
	;

Whitespace
	:   [ \t]+
		-> skip
	;

Newline
	:   (   '\r' '\n'?
		|   '\n'
		)
		-> skip
	;

BlockComment
	:   '/*' .*? '*/'
		-> skip
	;

LineComment
	:   '//' ~[\r\n]*
		-> skip
	;
