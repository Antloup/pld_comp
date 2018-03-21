grammar Prog;

WS              : [ \t\n\r]+ ->skip;
program             : globalVar* function*;
globalVar        : type name '=' val';';
function        : retType NAME'('sigParams?')' blockFunction;
blockFunction    : '{'(declare';')* instruction* '}';
instruction        : expr';'| ifStatement | whileStatement | returnStatement;
returnStatement     : RETURN val?;
ifStatement         : IF(expr) block elseStatement?;
elseStatement            : ELSE block | ELSE ifStatement;
whileStatement    : WHILE(expr) block;
block            : '{' instruction* '}';
declare           : type name;
type            : CHAR | INT32_T | INT64_T;
sigType        : CHAR '['']'|INT32_T '['']' | INT64_T '['']' | type;
retType         : type | VOID;
sigParams        : sigDeclare (','sigDeclare )*;
sigDeclare         : sigType name;
params        : expr (',' expr)*;
val            : name | NUMBER | CHARACTER;
name            : NAME('['expr?']')?;


expr  : expr '*' expr # mult
      | expr '/' expr # div
      | expr '+' expr # plus
      | name '++' # postincr
      | '++' name # preincr
      | expr '-' expr # moins
      | '-' expr #inv
      | name '--' # postdecr
      | '--' name # predecr
      | expr '%' expr # modulo
      | name '=' expr # affect
      | expr '==' expr # egal
      | expr '!=' expr # diff
      | expr '>' expr # sup
      | expr '>=' expr # supegal
      | expr '<' expr # inf
      | expr '<=' expr # infegal
      | expr '||' expr # ou
      | expr '&&' expr # et
      | '(' expr ')'  # par
      | '!'expr # non
      | NAME'('params?')' # callfunction
      | val #valeur
      ;

CHAR            : 'char';
INT32_T        : 'int32_t';
INT64_T        : 'int64_t';
IF            : 'if';
ELSE             : 'else';
RETURN			: 'return';
WHILE			: 'while';
VOID			: 'void';
//FUNCTION_NAME    : ('a'..'z'|'A'..'Z'|'_')('a'..'z'|'A'..'Z'|'_'|'0'..'9')*;
NAME            : ('a'..'z'|'A'..'Z'|'_')('a'..'z'|'A'..'Z'|'_'|'0'..'9')*;
CHARACTER        : '\''.'\'';
NUMBER        : ('0'..'9')+;
