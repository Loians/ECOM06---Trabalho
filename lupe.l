%{
    #include "arvore.h"
    #include "lupe.tab.h"
    extern void yyerror(const char* error);
    extern int erro;
    int lcont = 1;
%}

numero          [0-9]
letra           [a-zA-Z]

%%
"="                 { return ATRIBUICAO;    }
"+"                 { return SOMA;          }
"-"                 { return SUB;           }
"*"                 { return MULTI;         }
"/"                 { return DIVI;          }
"%"                 { return MOD;           }
"&&"                { return AND;           }
"||"                { return OR;            }
"!"                 { return NOT;           }
"=="                { return IGUAL;         }
">="                { return MAIORIGUAL;    }
"<="                { return MENORIGUAL;    }
">"                 { return MAIOR;         }
"<"                 { return MENOR;         }
"!="                { return DIFERENTE;     }

","                 { return VIRGULA;       }
";"                 { return PTVIRGULA;     }
"("                 { return ABREP;         }
")"                 { return FECHAP;        }
"{"                 { return INICIOBLOCO;   }
"}"                 { return FIMBLOCO;      }

"begin"             { return INICIOPROG;    }
"end"               { return FIMPROG;       }
"int"               { return T_INT;         }
"char"              { return T_CHAR;        }
"real"              { return T_REAL;        }
"if"                { return IF;            }
"else"              { return ELSE;          }
"while"             { return WHILE;         }
"for"               { return FOR;           }
"lpin"              { return ENTRADA;       }
"lpout"             { return SAIDA;         }

{letra}({letra}|{numero})* { yylval.var = strdup(yytext); return VARIAVEL; }

{numero}+           {yylval.inteiro = atoi(yytext);return INT;}

"'"({numero}|{letra})"'" {yylval.charac = yytext[1]; return CHAR;}

{numero}+"."{numero}* { yylval.real = atof(yytext);return REAL;} 

[ \t\r]
[\n]                {lcont++;}
.                   {printf("String desconhecida [%s]\n",yytext);erro++;}
%%

int yywrap(void){return 1;}

