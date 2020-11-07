all: lupe

lupe.tab.c lupe.tab.h:	lupe.y
	bison -t -v -d lupe.y

lex.yy.c: lupe.l lupe.tab.h
	flex lupe.l

lupe: lex.yy.c lupe.tab.c lupe.tab.h arvore.h arvore.c
	gcc -o lupe lupe.tab.c lex.yy.c arvore.c

clean:
	rm lupe lupe.tab.c lex.yy.c lupe.tab.h r.exe