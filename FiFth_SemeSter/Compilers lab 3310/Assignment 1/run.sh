bison -d P1.y -v
flex P1.l
gcc P1.tab.c lex.yy.c -lfl -o P1
./P1 <test1.java >output.java
