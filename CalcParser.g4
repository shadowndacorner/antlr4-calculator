parser grammar CalcParser;
// This is definitely broken for now lol

options
{
	tokenVocab=CalcLexer;
}

// root
root
	: expr? EOF
	;

numericLiteral : DecimalLiteral | FloatLiteral;

expr
	: numericLiteral	#literalExpr
	| PI				#piLiteralExpr
	| '(' expr ')'		#exprGroup
	| op=SUB expr		#negateExpr
	| lhs = expr op=EXP rhs = expr		#expExpr
	| lhs = expr op=MULT rhs = expr		#multExpr
	| lhs = expr op=DIV rhs = expr		#divExpr
	| lhs = expr op=ADD rhs = expr		#addExpr
	| lhs = expr op=SUB rhs = expr		#subExpr
	| SQRT'('expr')'					#sqrtExpr
	| SIN'('expr')'						#sinExpr
	| COS'('expr')'						#cosExpr
	| TAN'('expr')'						#tanExpr
	;