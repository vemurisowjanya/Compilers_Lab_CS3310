/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_P1_TAB_H_INCLUDED
# define YY_YY_P1_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    IDENTIFIER = 259,
    EOF_ = 260,
    LEFTPAREN = 261,
    RIGHTPAREN = 262,
    LEFTBR = 263,
    RIGHTBR = 264,
    LEFTBRACE = 265,
    RIGHTBRACE = 266,
    PUBLIC = 267,
    STATIC = 268,
    MAIN = 269,
    VOID = 270,
    STRING = 271,
    CLASS = 272,
    EXTENDS = 273,
    RETURN = 274,
    INT = 275,
    BOOLEAN = 276,
    COMMA = 277,
    IF_ = 278,
    ELSE_ = 279,
    ASSIGN = 280,
    PRINTLN = 281,
    BIT_AND = 282,
    BIT_OR = 283,
    NOTEQ = 284,
    LESSEQ = 285,
    PLUS = 286,
    MINUS = 287,
    MULTIPLY = 288,
    DIVIDE = 289,
    PERIOD = 290,
    TRUEVAL = 291,
    FALSEVAL = 292,
    THIS = 293,
    NEW = 294,
    NOT = 295,
    HASH = 296,
    DEFINE = 297,
    INTEGER_LITERAL = 298,
    WHILE = 299,
    LENGTH = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 27 "P1.y" /* yacc.c:1909  */

	int	int_val;
	char* char_val;

#line 105 "P1.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_P1_TAB_H_INCLUDED  */
