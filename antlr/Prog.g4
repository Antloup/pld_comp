grammar Prog;

WS              : [ \t\n\r]+ ->skip;
INCLUDE         : '#'.*?[\r\n] ->skip;
program         : globalVar* function*;
globalVar       : type name '=' expr';';
function        : retType NAME'('sigParams?')' blockFunction;
blockFunction   : '{'(declare';')* instruction* '}';
instruction     : expr';'| ifStatement | whileStatement | returnStatement;
returnStatement : RETURN expr?;
ifStatement     : IF(expr) block elseStatement?;
elseStatement   : ELSE block | ELSE ifStatement;
whileStatement  : WHILE(expr) block;
block           : '{' instruction* '}';
declare         : type name;
type            : CHAR | INT32_T | INT64_T;
sigType         : CHAR '['']'|INT32_T '['']' | INT64_T '['']' | type;
retType         : type | VOID;
sigParams       : sigDeclare (','sigDeclare )*;
sigDeclare      : sigType name;
params          : expr (',' expr)*;
constant        : NUMBER | CHARACTER;
name            : NAME('['expr?']')?;


expr  : expr '*' expr   # mult
      | expr '/' expr   # div
      | expr '+' expr   # plus
      | name '++'       # postincr
      | '++' name       # preincr
      | expr '-' expr   # minus
      | '-' expr        # inv
      | name '--'       # postdecr
      | '--' name       # predecr
      | expr '%' expr   # modulo
      | name '=' expr   # affect
      | expr '==' expr  # egal
      | expr '!=' expr  # diff
      | expr '>' expr   # sup
      | expr '>=' expr  # supegal
      | expr '<' expr   # inf
      | expr '<=' expr  # infegal
      | expr '||' expr  # or
      | expr '&&' expr  # and
      | '(' expr ')'    # par
      | '!'expr         # no
      | NAME'('params?')' # callfunction
      | name             # variable
      | constant           # const
      ;

CHAR        : 'char';
INT32_T     : 'int32_t';
INT64_T     : 'int64_t';
IF          : 'if';
ELSE        : 'else';
RETURN      : 'return';
WHILE       : 'while';
VOID        : 'void';
NAME        : ('a'..'z'|'A'..'Z'|'_')('a'..'z'|'A'..'Z'|'_'|'0'..'9')*;
CHARACTER   : '\''.'\'';
NUMBER      : ('0'..'9')+;
