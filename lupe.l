%{
    #include "arvore.h"
    #include "lupe.tab.h"
    extern void yyerror(const char* error);
    extern int erro;
    int lcont = 1;
    FILE* yytok;
%}

numero          [0-9]
letra           [a-zA-Z]

%%
"="                 { fprintf(yytok,"ATRIBUICAO "); return ATRIBUICAO;}
"+"                 { fprintf(yytok,"SOMA ");       return SOMA;          }
"-"                 { fprintf(yytok,"SUB ");        return SUB;           }
"*"                 { fprintf(yytok,"MULTI ");      return MULTI;         }
"/"                 { fprintf(yytok,"DIVI ");       return DIVI;          }
"%"                 { fprintf(yytok,"MOD ");        return MOD;           }
"&&"                { fprintf(yytok,"AND ");        return AND;           }
"||"                { fprintf(yytok,"OR ");         return OR;            }
"!"                 { fprintf(yytok,"NOT ");        return NOT;           }
"=="                { fprintf(yytok,"IGUAL ");      return IGUAL;         }
">="                { fprintf(yytok,"MAIORIGUAL "); return MAIORIGUAL;    }
"<="                { fprintf(yytok,"MENORIGUAL "); return MENORIGUAL;    }
">"                 { fprintf(yytok,"MAIOR ");      return MAIOR;         }
"<"                 { fprintf(yytok,"MENOR ");      return MENOR;         }
"!="                { fprintf(yytok,"DIFERENTE ");  return DIFERENTE;     }
 
","                 { fprintf(yytok,"VIRGULA ");    return VIRGULA;       }
";"                 { fprintf(yytok,"PTVIRGULA ");  return PTVIRGULA;     }
"("                 { fprintf(yytok,"ABREP ");      return ABREP;         }
")"                 { fprintf(yytok,"FECHAP ");     return FECHAP;        }
"{"                 { fprintf(yytok,"INICIOBLOCO ");return INICIOBLOCO;   }
"}"                 { fprintf(yytok,"FIMBLOCO ");   return FIMBLOCO;      }
 
"begin"             { fprintf(yytok,"INICIOPROG "); return INICIOPROG;    }
"end"               { fprintf(yytok,"FIMPROG ");    return FIMPROG;       }
"int"               { fprintf(yytok,"T_INT ");      return T_INT;         }
"char"              { fprintf(yytok,"T_CHAR ");     return T_CHAR;        }
"real"              { fprintf(yytok,"T_REAL ");     return T_REAL;        }
"if"                { fprintf(yytok,"IF ");         return IF;            }
"else"              { fprintf(yytok,"ELSE ");       return ELSE;          }
"while"             { fprintf(yytok,"WHILE ");      return WHILE;         }
"for"               { fprintf(yytok,"FOR ");        return FOR;           }
"lpin"              { fprintf(yytok,"ENTRADA ");    return ENTRADA;       }
"lpout"             { fprintf(yytok,"SAIDA ");      return SAIDA;         }

{letra}({letra}|{numero})*  {yylval.var = strdup(yytext);       fprintf(yytok,"VARIAVEL "); return VARIAVEL; }

{numero}+                   {yylval.inteiro = atoi(yytext);     fprintf(yytok,"INT ");      return INT;}

"'"."'"                     {yylval.charac = yytext[1];         fprintf(yytok,"CHAR ");     return CHAR;}

"\"".*"\""                  {yylval.palavra = strdup(yytext);   fprintf(yytok,"PALAVRA");   return PALAVRA;}

{numero}+"."{numero}*       {yylval.real = atof(yytext);        fprintf(yytok,"REAL ");     return REAL;}

[\t\r \f]
[\n]                {lcont++; fprintf(yytok,"\n"); }
.                   {printf("String desconhecida [%s]\n",yytext);erro++;}
%%

int yywrap(void){return 1;}

