/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "P1.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
extern int yylex();
extern void yyerror(char *);
bool isMacro = false;
typedef struct lookup_macros{
	char* name;
	char* action;
	char* all_args;
	struct lookup_macros* next;
} macro_store;
macro_store *HeadAllMacros=NULL;
macro_store *TopAllMacros=NULL;
void store(char*,char*,char*);
char* find_replace(char* ,char* , char* ,int );
char* evaluate(char* ,char*);
int count_args(char* );
char* remove_delimiters(char* );
int find(char* );

#line 90 "P1.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "P1.tab.h".  */
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
#line 27 "P1.y" /* yacc.c:355  */

	int	int_val;
	char* char_val;

#line 181 "P1.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_P1_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 196 "P1.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    48,    53,    55,    60,    62,    92,   111,
     121,   136,   141,   143,   150,   155,   157,   162,   164,   172,
     179,   180,   186,   190,   194,   199,   205,   213,   220,   230,
     238,   249,   257,   276,   291,   297,   299,   305,   311,   317,
     324,   330,   336,   342,   348,   355,   361,   365,   375,   383,
     401,   415,   419,   423,   427,   431,   435,   444,   452,   458,
     465,   466,   468,   470,   474,   482,   495,   500,   505,   507,
     512,   514,   519
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "IDENTIFIER", "EOF_",
  "LEFTPAREN", "RIGHTPAREN", "LEFTBR", "RIGHTBR", "LEFTBRACE",
  "RIGHTBRACE", "PUBLIC", "STATIC", "MAIN", "VOID", "STRING", "CLASS",
  "EXTENDS", "RETURN", "INT", "BOOLEAN", "COMMA", "IF_", "ELSE_", "ASSIGN",
  "PRINTLN", "BIT_AND", "BIT_OR", "NOTEQ", "LESSEQ", "PLUS", "MINUS",
  "MULTIPLY", "DIVIDE", "PERIOD", "TRUEVAL", "FALSEVAL", "THIS", "NEW",
  "NOT", "HASH", "DEFINE", "INTEGER_LITERAL", "WHILE", "LENGTH", "$accept",
  "Goal", "MacroDefinition_", "TypeDeclaration_", "MainClass",
  "MethodDeclaration", "TypeDeclaration", "MethodDeclaration_",
  "typeIdentifier1", "typeIdentifier_1", "typeIdentifier_2",
  "typeIdentifier2", "typeIdentifier_3", "Type", "Statement",
  "Expression_", "Expression", "PrimaryExpression", "MacroDefinition",
  "CheckMacro", "MacroDefStatement", "MacroDefExpression", "Identifier",
  "Integer", "Identifier_", "Identifier_1", "Statement_", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF -119

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-119)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,   -36,    15,    18,   -33,    38,  -119,  -119,  -119,  -119,
      38,    35,  -119,  -119,    57,    55,    38,  -119,    35,    38,
      54,    10,  -119,    49,    65,    70,  -119,    38,    38,  -119,
      28,    69,    81,    77,    49,   155,     6,    75,     5,    82,
    -119,    79,    83,  -119,    38,  -119,  -119,  -119,   155,  -119,
    -119,  -119,    66,   155,  -119,    88,    80,    90,  -119,     6,
      91,    92,    98,     6,    43,   105,   111,    38,   110,  -119,
    -119,   117,    81,   116,   118,   119,  -119,  -119,   155,   155,
     155,   155,   155,   155,   155,   155,   155,     0,    99,   120,
     155,   155,   155,  -119,   139,   155,   155,  -119,   112,   123,
    -119,  -119,   122,  -119,   155,   133,   135,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,   143,  -119,   128,
    -119,   148,   149,   151,   124,   128,   154,   157,   156,     5,
    -119,   158,  -119,  -119,   147,   155,   159,     6,   162,     6,
    -119,   161,   146,  -119,   163,   166,    38,  -119,  -119,   128,
     128,  -119,   150,  -119,  -119,   177,   155,    38,   171,   167,
     181,  -119,     6,  -119,   193,   190,  -119,     5,  -119,   167,
    -119,  -119,  -119,   198,    20,    38,  -119,   183,    43,   191,
    -119,   205,   155,   155,   209,   206,   203,   212,  -119,   207,
     208,  -119
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     4,     0,    61,    60,    62,     1,
       0,     6,     3,    65,     0,     0,     0,     2,     6,    70,
       0,     0,     5,    68,     0,     0,    15,     0,     0,    69,
       0,     0,    12,     0,    68,     0,    72,     0,     0,    23,
      22,    12,     0,    14,     0,    24,    15,    67,     0,    52,
      53,    55,     0,     0,    66,     0,    46,    54,    51,    72,
       0,     0,     0,    72,     0,     0,     0,     0,     0,    11,
       9,     0,    12,     0,     0,     0,    58,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,    63,     0,     0,
      21,    13,     0,    59,     0,     0,     0,    54,    36,    37,
      38,    39,    40,    41,    42,    43,    45,     0,    50,    35,
      25,     0,     0,     0,     0,    35,     0,     0,     0,    20,
      10,     0,    57,    44,     0,     0,     0,     0,     0,     0,
      33,     0,     0,    27,     0,     0,     0,    56,    48,    35,
      35,    49,    29,    26,    31,     0,     0,     0,     0,    17,
       0,    34,     0,    32,     0,     0,    15,     0,    19,    17,
      47,    30,    28,     0,    72,     0,    16,     0,    24,     0,
      18,     0,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     7
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,   213,   202,  -119,  -119,  -119,   -24,  -119,   -44,
      47,  -119,  -119,   -37,  -118,  -113,   -35,   121,  -119,  -119,
    -119,  -119,    -5,  -119,   187,  -119,   -56
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    17,    11,    41,    18,    42,    43,    32,
     168,   169,   145,    44,    63,   136,    55,    56,     4,     5,
       6,     7,    57,    58,    29,    24,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      14,    67,    72,    89,    13,    15,     8,    93,     1,    13,
      13,    21,   141,    73,    23,     9,    59,    69,    76,   152,
      26,   154,    33,    34,    13,    39,    40,    45,    27,    60,
      59,    64,    61,    45,    35,    10,   160,   161,    36,    71,
      39,    40,    13,    60,   171,   116,    61,    75,   102,    94,
      62,    95,    16,   119,    64,   121,   122,   123,    64,   125,
     126,   127,    99,    19,    62,    20,    25,    45,    96,   131,
      13,    28,    30,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   117,    31,    37,    13,    74,    46,    78,    66,
      68,    38,   146,    38,    70,    77,    88,    90,    91,   149,
     150,    39,    40,    13,    92,    48,   118,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    97,    98,   179,   100,
     101,   164,   174,   103,    45,   105,   104,   140,   128,   129,
     175,   120,    64,   130,    64,    49,    50,    51,    52,    53,
     132,   159,    54,    13,   133,    48,   124,   184,   185,   134,
     135,    13,   165,    48,   148,   137,   138,    64,   139,    13,
     143,    48,    45,   142,   144,   153,   151,   147,   155,   178,
     180,   156,   157,   158,   162,    49,    50,    51,    52,    53,
     163,   166,    54,    49,    50,    51,    52,    53,   170,   167,
      54,    49,    50,    51,    52,    53,   172,   173,    54,   106,
     108,   109,   110,   111,   112,   113,   114,   115,   177,   181,
     182,   183,   186,   187,   188,   189,   176,    12,   190,   191,
      22,    47
};

static const yytype_uint8 yycheck[] =
{
       5,    38,    46,    59,     4,    10,    42,    63,    41,     4,
       4,    16,   125,    48,    19,     0,    10,    41,    53,   137,
      10,   139,    27,    28,     4,    20,    21,    32,    18,    23,
      10,    36,    26,    38,     6,    17,   149,   150,    10,    44,
      20,    21,     4,    23,   162,    45,    26,    52,    72,     6,
      44,     8,    17,    88,    59,    90,    91,    92,    63,    94,
      95,    96,    67,     6,    44,    10,    12,    72,    25,   104,
       4,    22,     7,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    13,    15,     4,    20,    10,     8,    14,
       8,    12,   129,    12,    11,     7,     6,     6,     6,   134,
     135,    20,    21,     4,     6,     6,     7,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    11,     6,   174,     9,
       3,   156,   166,     7,   129,     6,     8,     3,    16,     6,
     167,    11,   137,    11,   139,    36,    37,    38,    39,    40,
       7,   146,    43,     4,     9,     6,     7,   182,   183,     6,
      22,     4,   157,     6,     7,     7,     7,   162,     7,     4,
       3,     6,   167,     9,     8,     3,     7,     9,     7,   174,
     175,    25,     9,     7,    24,    36,    37,    38,    39,    40,
       3,    10,    43,    36,    37,    38,    39,    40,     7,    22,
      43,    36,    37,    38,    39,    40,     3,     7,    43,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    10,    26,
      19,     6,     3,     7,    11,     3,   169,     4,    11,    11,
      18,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    47,    48,    64,    65,    66,    67,    42,     0,
      17,    50,    48,     4,    68,    68,    17,    49,    52,     6,
      10,    68,    49,    68,    71,    12,    10,    18,    22,    70,
       7,    13,    55,    68,    68,     6,    10,    15,    12,    20,
      21,    51,    53,    54,    59,    68,    10,    70,     6,    36,
      37,    38,    39,    40,    43,    62,    63,    68,    69,    10,
      23,    26,    44,    60,    68,    72,    14,    59,     8,    53,
      11,    68,    55,    62,    20,    68,    62,     7,     8,    27,
      28,    29,    30,    31,    32,    33,    34,    35,     6,    72,
       6,     6,     6,    72,     6,     8,    25,    11,     6,    68,
       9,     3,    53,     7,     8,     6,    63,    68,    63,    63,
      63,    63,    63,    63,    63,    63,    45,    68,     7,    62,
      11,    62,    62,    62,     7,    62,    62,    62,    16,     6,
      11,    62,     7,     9,     6,    22,    61,     7,     7,     7,
       3,    61,     9,     3,     8,    58,    59,     9,     7,    62,
      62,     7,    60,     3,    60,     7,    25,     9,     7,    68,
      61,    61,    24,     3,    62,    68,    10,    22,    56,    57,
       7,    60,     3,     7,    55,    59,    56,    10,    68,    72,
      68,    26,    19,     6,    62,    62,     3,     7,    11,     3,
      11,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    51,    52,
      52,    53,    53,    54,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    59,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    66,    67,    68,    69,    70,    70,    71,
      71,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     2,     0,    21,    13,     6,
       8,     2,     0,     3,     2,     0,     2,     0,     3,     3,
       0,     3,     1,     1,     1,     3,     5,     4,     7,     5,
       7,     5,     6,     4,     3,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     1,     7,     5,     5,
       3,     1,     1,     1,     1,     1,     5,     4,     2,     3,
       1,     1,     2,     8,     8,     1,     1,     3,     0,     2,
       0,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 40 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),"\n");
	strcat((yyval.char_val),(yyvsp[0].char_val));
	printf("%s ",(yyval.char_val));
}
#line 1414 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1424 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 53 "P1.y" /* yacc.c:1646  */
    {(yyval.char_val) = "";}
#line 1430 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 55 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1440 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 60 "P1.y" /* yacc.c:1646  */
    {(yyval.char_val) = "";}
#line 1446 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "P1.y" /* yacc.c:1646  */
    {
				(yyval.char_val) = (char*)malloc(strlen((yyvsp[-18].char_val))+strlen((yyvsp[-16].char_val))+strlen((yyvsp[-20].char_val))+strlen((yyvsp[-19].char_val))+strlen((yyvsp[-17].char_val))+strlen((yyvsp[-15].char_val))+strlen((yyvsp[-14].char_val))+strlen((yyvsp[-13].char_val))+strlen((yyvsp[-12].char_val))+strlen((yyvsp[-11].char_val))+strlen((yyvsp[-10].char_val))+strlen((yyvsp[-9].char_val))+strlen((yyvsp[-8].char_val))+strlen((yyvsp[-7].char_val))+strlen((yyvsp[-6].char_val))+strlen((yyvsp[-5].char_val))+strlen((yyvsp[-4].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+7);
				strcpy((yyval.char_val),(yyvsp[-20].char_val));
				strcat((yyval.char_val)," ");
				strcat((yyval.char_val),(yyvsp[-19].char_val));
				strcat((yyval.char_val),(yyvsp[-18].char_val));
				strcat((yyval.char_val),(yyvsp[-17].char_val));
				strcat((yyval.char_val)," ");
				strcat((yyval.char_val),(yyvsp[-16].char_val));
				strcat((yyval.char_val)," ");
				strcat((yyval.char_val),(yyvsp[-15].char_val));
				strcat((yyval.char_val)," ");
				strcat((yyval.char_val),(yyvsp[-14].char_val));
				strcat((yyval.char_val),(yyvsp[-13].char_val));
				strcat((yyval.char_val),(yyvsp[-12].char_val));
				strcat((yyval.char_val),(yyvsp[-11].char_val));
				strcat((yyval.char_val),(yyvsp[-10].char_val));
				strcat((yyval.char_val)," ");
				strcat((yyval.char_val),(yyvsp[-9].char_val));
				strcat((yyval.char_val),(yyvsp[-8].char_val));
				strcat((yyval.char_val),(yyvsp[-7].char_val));
				strcat((yyval.char_val),(yyvsp[-6].char_val));
				strcat((yyval.char_val),(yyvsp[-5].char_val));
				strcat((yyval.char_val),(yyvsp[-4].char_val));
				strcat((yyval.char_val),(yyvsp[-3].char_val));
				strcat((yyval.char_val),(yyvsp[-2].char_val));	
				strcat((yyval.char_val),(yyvsp[-1].char_val));
				strcat((yyval.char_val),(yyvsp[0].char_val));
				}
#line 1480 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 92 "P1.y" /* yacc.c:1646  */
    {
		(yyval.char_val) = (char*)malloc(strlen((yyvsp[-12].char_val))+strlen((yyvsp[-11].char_val))+strlen((yyvsp[-10].char_val))+strlen((yyvsp[-9].char_val))+strlen((yyvsp[-8].char_val))+strlen((yyvsp[-7].char_val))+strlen((yyvsp[-6].char_val))+strlen((yyvsp[-5].char_val))+strlen((yyvsp[-4].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+4);
		strcpy((yyval.char_val),(yyvsp[-12].char_val));
		strcat((yyval.char_val)," ");
		strcat((yyval.char_val),(yyvsp[-11].char_val));
		strcat((yyval.char_val)," ");
		strcat((yyval.char_val),(yyvsp[-10].char_val));
		strcat((yyval.char_val),(yyvsp[-9].char_val));
		strcat((yyval.char_val),(yyvsp[-8].char_val));
		strcat((yyval.char_val),(yyvsp[-7].char_val));
		strcat((yyval.char_val),(yyvsp[-6].char_val));
		strcat((yyval.char_val),(yyvsp[-5].char_val));
		strcat((yyval.char_val),(yyvsp[-4].char_val));
		strcat((yyval.char_val),(yyvsp[-3].char_val));
		strcat((yyval.char_val)," ");
		strcat((yyval.char_val),(yyvsp[-2].char_val));
		strcat((yyval.char_val),(yyvsp[-1].char_val));
		strcat((yyval.char_val),(yyvsp[0].char_val));		
		}
#line 1504 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 111 "P1.y" /* yacc.c:1646  */
    {
				(yyval.char_val) = (char*)malloc(strlen((yyvsp[-5].char_val))+strlen((yyvsp[-4].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+3);
				strcpy((yyval.char_val),(yyvsp[-5].char_val));
				strcat((yyval.char_val)," ");
				strcat((yyval.char_val),(yyvsp[-4].char_val));
				strcat((yyval.char_val),(yyvsp[-3].char_val));
				strcat((yyval.char_val),(yyvsp[-2].char_val));
				strcat((yyval.char_val),(yyvsp[-1].char_val));
				strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1519 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 121 "P1.y" /* yacc.c:1646  */
    {
				(yyval.char_val) = (char*)malloc(strlen((yyvsp[-7].char_val))+strlen((yyvsp[-6].char_val))+strlen((yyvsp[-5].char_val))+strlen((yyvsp[-4].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+4);
				strcpy((yyval.char_val),(yyvsp[-7].char_val));
				strcat((yyval.char_val)," ");
				strcat((yyval.char_val),(yyvsp[-6].char_val));
				strcat((yyval.char_val)," ");
				strcat((yyval.char_val),(yyvsp[-5].char_val));
				strcat((yyval.char_val)," ");
				strcat((yyval.char_val),(yyvsp[-4].char_val));
				strcat((yyval.char_val),(yyvsp[-3].char_val));
				strcat((yyval.char_val),(yyvsp[-2].char_val));				
				strcat((yyval.char_val),(yyvsp[-1].char_val));
				strcat((yyval.char_val),(yyvsp[0].char_val));
			}
#line 1538 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 136 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1548 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 141 "P1.y" /* yacc.c:1646  */
    {(yyval.char_val) = "";}
#line 1554 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 143 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+2);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val)," ");
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1566 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 150 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1576 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 155 "P1.y" /* yacc.c:1646  */
    {(yyval.char_val) = "";}
#line 1582 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 157 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1592 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 162 "P1.y" /* yacc.c:1646  */
    {(yyval.char_val) = "";}
#line 1598 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 164 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+3);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val)," ");
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1610 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 172 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+2); 
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val)," ");
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
	}
#line 1622 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 179 "P1.y" /* yacc.c:1646  */
    {(yyval.char_val) = "";}
#line 1628 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 180 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+1+strlen((yyvsp[0].char_val)));
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1639 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 186 "P1.y" /* yacc.c:1646  */
    {
								(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
								strcpy((yyval.char_val),(yyvsp[0].char_val));
					}
#line 1648 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 190 "P1.y" /* yacc.c:1646  */
    {
								(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
								strcpy((yyval.char_val),(yyvsp[0].char_val));
					}
#line 1657 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 194 "P1.y" /* yacc.c:1646  */
    {
								(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
								strcpy((yyval.char_val),(yyvsp[0].char_val));
						}
#line 1666 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 199 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1677 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 205 "P1.y" /* yacc.c:1646  */
    {
				(yyval.char_val) = (char*)malloc(strlen((yyvsp[-4].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+2);
				strcpy((yyval.char_val),(yyvsp[-4].char_val));
				strcat((yyval.char_val),(yyvsp[-3].char_val));
				strcat((yyval.char_val),(yyvsp[-2].char_val));
				strcat((yyval.char_val),(yyvsp[-1].char_val));
				strcat((yyval.char_val),(yyvsp[0].char_val));
			}
#line 1690 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 213 "P1.y" /* yacc.c:1646  */
    {
				(yyval.char_val) = (char*)malloc(strlen((yyvsp[-3].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[0].char_val))+4);
				strcpy((yyval.char_val),(yyvsp[-3].char_val));
				strcat((yyval.char_val),(yyvsp[-2].char_val));
				strcat((yyval.char_val),(yyvsp[-1].char_val));
				strcat((yyval.char_val),(yyvsp[0].char_val));
			}
#line 1702 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 220 "P1.y" /* yacc.c:1646  */
    {
				(yyval.char_val) = (char*)malloc(strlen((yyvsp[-6].char_val))+strlen((yyvsp[-5].char_val))+strlen((yyvsp[-4].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+4);
				strcpy((yyval.char_val),(yyvsp[-6].char_val));
				strcat((yyval.char_val),(yyvsp[-5].char_val));
				strcat((yyval.char_val),(yyvsp[-4].char_val));
				strcat((yyval.char_val),(yyvsp[-3].char_val));
				strcat((yyval.char_val),(yyvsp[-2].char_val));
				strcat((yyval.char_val),(yyvsp[-1].char_val));
				strcat((yyval.char_val),(yyvsp[0].char_val));
			}
#line 1717 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 230 "P1.y" /* yacc.c:1646  */
    {
				(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[0].char_val))+strlen((yyvsp[-4].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-1].char_val))+3);
				strcpy((yyval.char_val),(yyvsp[-4].char_val));
				strcat((yyval.char_val),(yyvsp[-3].char_val));
				strcat((yyval.char_val),(yyvsp[-2].char_val));
				strcat((yyval.char_val),(yyvsp[-1].char_val));
				strcat((yyval.char_val),(yyvsp[0].char_val));
			}
#line 1730 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 238 "P1.y" /* yacc.c:1646  */
    {
				(yyval.char_val) = (char*)malloc(strlen((yyvsp[-4].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-6].char_val))+strlen((yyvsp[-5].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+4);
				strcpy((yyval.char_val),(yyvsp[-6].char_val));
				strcat((yyval.char_val),(yyvsp[-5].char_val));
				strcat((yyval.char_val),(yyvsp[-4].char_val));
				strcat((yyval.char_val),(yyvsp[-3].char_val));
				strcat((yyval.char_val),(yyvsp[-2].char_val));
				strcat((yyval.char_val),(yyvsp[-1].char_val));
				strcat((yyval.char_val)," ");
				strcat((yyval.char_val),(yyvsp[0].char_val));
			}
#line 1746 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 249 "P1.y" /* yacc.c:1646  */
    {
				(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[0].char_val))+strlen((yyvsp[-4].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-1].char_val))+2);
				strcpy((yyval.char_val),(yyvsp[-4].char_val));
				strcat((yyval.char_val),(yyvsp[-3].char_val));
				strcat((yyval.char_val),(yyvsp[-2].char_val));
				strcat((yyval.char_val),(yyvsp[-1].char_val));
				strcat((yyval.char_val),(yyvsp[0].char_val));
			}
#line 1759 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 257 "P1.y" /* yacc.c:1646  */
    {
					char *temp = malloc(strlen((yyvsp[-3].char_val))+strlen((yyvsp[-2].char_val))+1);
					strcpy(temp,(yyvsp[-3].char_val));
					strcat(temp,(yyvsp[-2].char_val));
					char* name = (char*)malloc(strlen((yyvsp[-5].char_val))+3);
					strcpy(name,"%");
					strcat(name,(yyvsp[-5].char_val));
					strcat(name,"%");
					(yyval.char_val) = evaluate(name,temp);
					if((yyval.char_val)==NULL){
					(yyval.char_val) = (char*)malloc(strlen((yyvsp[-3].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[-5].char_val))+strlen((yyvsp[-4].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[0].char_val))+1);
					strcpy((yyval.char_val),(yyvsp[-5].char_val));
					strcat((yyval.char_val),(yyvsp[-4].char_val));
					strcat((yyval.char_val),(yyvsp[-3].char_val));
					strcat((yyval.char_val),(yyvsp[-2].char_val));
					strcat((yyval.char_val),(yyvsp[-1].char_val));
					strcat((yyval.char_val),(yyvsp[0].char_val));
				}
			}
#line 1783 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 276 "P1.y" /* yacc.c:1646  */
    {
					char* name = (char*)malloc(strlen((yyvsp[-3].char_val))+3);
					strcpy(name,"%");
					strcat(name,(yyvsp[-3].char_val));
					strcat(name,"%");				
					(yyval.char_val) = evaluate(name,NULL);
					if((yyval.char_val) == NULL){
					(yyval.char_val) = (char*)malloc(strlen((yyvsp[-3].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
					strcpy((yyval.char_val),(yyvsp[-3].char_val));
					strcat((yyval.char_val),(yyvsp[-2].char_val));
					strcat((yyval.char_val),(yyvsp[-1].char_val));
					strcat((yyval.char_val),(yyvsp[0].char_val));
				}
			}
#line 1802 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 291 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+2);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1813 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 297 "P1.y" /* yacc.c:1646  */
    {(yyval.char_val) = "";}
#line 1819 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 299 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[0].char_val))+strlen((yyvsp[-1].char_val))+3);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1830 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 305 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[0].char_val))+3+strlen((yyvsp[-1].char_val)));
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));	
}
#line 1841 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 311 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[0].char_val))+3+strlen((yyvsp[-1].char_val)));
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1852 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 317 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+3);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
	
}
#line 1864 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 324 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+3);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));	
}
#line 1875 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 330 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+3);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1886 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 336 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+3);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));	
}
#line 1897 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 342 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+3);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));	
}
#line 1908 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 348 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-3].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[-3].char_val));
	strcat((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1920 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 355 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));	
}
#line 1931 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 361 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[0].char_val));
}
#line 1940 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 365 "P1.y" /* yacc.c:1646  */
    {
					(yyval.char_val) = (char*)malloc(strlen((yyvsp[-6].char_val))+strlen((yyvsp[-4].char_val))+strlen((yyvsp[-5].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
					strcpy((yyval.char_val),(yyvsp[-6].char_val));
					strcat((yyval.char_val),(yyvsp[-5].char_val));
					strcat((yyval.char_val),(yyvsp[-4].char_val));
					strcat((yyval.char_val),(yyvsp[-3].char_val));
					strcat((yyval.char_val),(yyvsp[-2].char_val));
					strcat((yyval.char_val),(yyvsp[-1].char_val));
					strcat((yyval.char_val),(yyvsp[0].char_val));	
}
#line 1955 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 375 "P1.y" /* yacc.c:1646  */
    {
					(yyval.char_val) = (char*)malloc(strlen((yyvsp[-4].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
					strcpy((yyval.char_val),(yyvsp[-4].char_val));
					strcat((yyval.char_val),(yyvsp[-3].char_val));
					strcat((yyval.char_val),(yyvsp[-2].char_val));
					strcat((yyval.char_val),(yyvsp[-1].char_val));
					strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 1968 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 383 "P1.y" /* yacc.c:1646  */
    {
					char *args = malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+1);
					strcpy(args,(yyvsp[-2].char_val));
					strcat(args,(yyvsp[-1].char_val));
					char *name = malloc(strlen((yyvsp[-4].char_val))+3);
					strcpy(name,"%");
					strcat(name,(yyvsp[-4].char_val));
					strcat(name,"%");
					(yyval.char_val) = evaluate(name,args);
					if((yyval.char_val)==NULL){
						(yyval.char_val) = (char*)malloc(strlen((yyvsp[-4].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
						strcpy((yyval.char_val),(yyvsp[-4].char_val));
						strcat((yyval.char_val),(yyvsp[-3].char_val));
						strcat((yyval.char_val),(yyvsp[-2].char_val));
						strcat((yyval.char_val),(yyvsp[-1].char_val));
						strcat((yyval.char_val),(yyvsp[0].char_val));
				}
			}
#line 1991 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 401 "P1.y" /* yacc.c:1646  */
    {
					char *name = malloc(strlen((yyvsp[-2].char_val))+3);
					strcpy(name,"%");
					strcat(name,(yyvsp[-2].char_val));
					strcat(name,"%");
					(yyval.char_val) = evaluate(name,NULL);
					if((yyval.char_val)==NULL){
						(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[0].char_val))+strlen((yyvsp[-1].char_val))+1);
						strcpy((yyval.char_val),(yyvsp[-2].char_val));
						strcat((yyval.char_val),(yyvsp[-1].char_val));
						strcat((yyval.char_val),(yyvsp[0].char_val));
				}
			}
#line 2009 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 415 "P1.y" /* yacc.c:1646  */
    {
								(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
								strcpy((yyval.char_val),(yyvsp[0].char_val));
							}
#line 2018 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 419 "P1.y" /* yacc.c:1646  */
    {	
									(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
									strcpy((yyval.char_val),(yyvsp[0].char_val));
								}
#line 2027 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 423 "P1.y" /* yacc.c:1646  */
    {	
									(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
									strcpy((yyval.char_val),(yyvsp[0].char_val));
								}
#line 2036 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 427 "P1.y" /* yacc.c:1646  */
    {
										(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
										strcpy((yyval.char_val),(yyvsp[0].char_val));			
									}
#line 2045 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 431 "P1.y" /* yacc.c:1646  */
    {	
										(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
										strcpy((yyval.char_val),(yyvsp[0].char_val));
									}
#line 2054 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 435 "P1.y" /* yacc.c:1646  */
    {
						(yyval.char_val) = (char*)malloc(strlen((yyvsp[-4].char_val))+strlen((yyvsp[-3].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+2);
						strcpy((yyval.char_val),(yyvsp[-4].char_val));
						strcat((yyval.char_val)," ");
						strcat((yyval.char_val),(yyvsp[-3].char_val));
						strcat((yyval.char_val),(yyvsp[-2].char_val));
						strcat((yyval.char_val),(yyvsp[-1].char_val));
						strcat((yyval.char_val),(yyvsp[0].char_val));
				}
#line 2068 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 444 "P1.y" /* yacc.c:1646  */
    {
						(yyval.char_val) = (char*)malloc(strlen((yyvsp[-3].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[-2].char_val))+strlen((yyvsp[0].char_val))+2);
						strcpy((yyval.char_val),(yyvsp[-3].char_val));
						strcat((yyval.char_val)," ");
						strcat((yyval.char_val),(yyvsp[-2].char_val));
						strcat((yyval.char_val),(yyvsp[-1].char_val));
						strcat((yyval.char_val),(yyvsp[0].char_val));
				}
#line 2081 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 452 "P1.y" /* yacc.c:1646  */
    {
																(yyval.char_val) = (char*)malloc(strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
																strcpy((yyval.char_val),(yyvsp[-1].char_val));
																strcat((yyval.char_val),(yyvsp[0].char_val));

															}
#line 2092 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 458 "P1.y" /* yacc.c:1646  */
    {
																(yyval.char_val) =(char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
																strcpy((yyval.char_val),(yyvsp[-2].char_val));
																strcat((yyval.char_val),(yyvsp[-1].char_val));
																strcat((yyval.char_val),(yyvsp[0].char_val));
															}
#line 2103 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 468 "P1.y" /* yacc.c:1646  */
    {isMacro = true;}
#line 2109 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 470 "P1.y" /* yacc.c:1646  */
    {
	store((yyvsp[-6].char_val),(yyvsp[-4].char_val),(yyvsp[-1].char_val));
}
#line 2117 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 474 "P1.y" /* yacc.c:1646  */
    {
	char *temp = (char*)malloc(strlen((yyvsp[-1].char_val))+3);
	strcpy(temp,"(");
	strcat(temp,(yyvsp[-1].char_val));
	strcat(temp,")");
	store((yyvsp[-6].char_val),(yyvsp[-4].char_val),temp);
}
#line 2129 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 482 "P1.y" /* yacc.c:1646  */
    {
	if(isMacro == true){
			(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+3);
			strcpy((yyval.char_val),"%");
			strcat((yyval.char_val),(yyvsp[0].char_val));
			strcat((yyval.char_val),"%");
		}
		else{
			(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
			strcpy((yyval.char_val),(yyvsp[0].char_val));
		}
	}
#line 2146 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 495 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[0].char_val));
}
#line 2155 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 500 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-2].char_val))+strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+2);
	strcpy((yyval.char_val),(yyvsp[-2].char_val));
	strcat((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));}
#line 2165 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 505 "P1.y" /* yacc.c:1646  */
    {(yyval.char_val) = "";}
#line 2171 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 507 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);	
	strcpy((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
	}
#line 2181 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 512 "P1.y" /* yacc.c:1646  */
    {(yyval.char_val) = "";}
#line 2187 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 514 "P1.y" /* yacc.c:1646  */
    {
	(yyval.char_val) = (char*)malloc(strlen((yyvsp[-1].char_val))+strlen((yyvsp[0].char_val))+1);
	strcpy((yyval.char_val),(yyvsp[-1].char_val));
	strcat((yyval.char_val),(yyvsp[0].char_val));
}
#line 2197 "P1.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 519 "P1.y" /* yacc.c:1646  */
    {(yyval.char_val) = "";}
#line 2203 "P1.tab.c" /* yacc.c:1646  */
    break;


#line 2207 "P1.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 521 "P1.y" /* yacc.c:1906  */

void store(char* name, char* args, char *action){
	macro_store* Curr;
	if(TopAllMacros==NULL){
		TopAllMacros = (macro_store*)malloc(sizeof(macro_store));
		Curr = TopAllMacros;
	}
	else{
		HeadAllMacros->next = (macro_store*)malloc(sizeof(macro_store));
		Curr = HeadAllMacros->next;
	}
	Curr->name = (char*)malloc(strlen(name)+1);
	strcpy(Curr->name, name);
	Curr->all_args = (char*)malloc(strlen(args)+1);
	strcpy(Curr->all_args, args);
	Curr->next = NULL;
	Curr->action = (char*)malloc(strlen(action)+1);
	strcpy(Curr->action,action);
	HeadAllMacros = Curr;	
	isMacro = false;

}
char* evaluate(char* name, char* args){
	macro_store* Curr = TopAllMacros;
	if(args==NULL){
		while(Curr!=NULL){
			if(strcmp(Curr->name,name)==0){
				return Curr->action;
			}
			Curr = Curr->next;
		}
	}
	else{
		while(Curr!=NULL){
			int num_args;
			if(strcmp(Curr->name,name)==0){
				if((num_args = count_args(Curr->all_args))==count_args(args))
					return find_replace(Curr->all_args,args,Curr->action,num_args);
				else
				{
					printf("// Failed to parse macrojava code.\n");
					exit(0);
				}
		}
			Curr = Curr->next;
		}
	}
	return NULL;
}
char* find_replace(char* old_argstr, char* new_argstr, char* action,int num_args){
	char *old_args[num_args], *new_args[num_args];
	int i=0,j=0,k=0,count=0,offset=0;
	if(num_args==1)
	{
		old_args[0] = (char*)malloc(strlen(old_argstr)+1);
		strcpy(old_args[0],old_argstr);
		new_args[0] =  (char*)malloc(strlen(new_argstr)+1);
		strcpy(new_args[0],new_argstr);
	}
	else
	{
		while(i<strlen(old_argstr)+1){
			if(old_argstr[i]==',' || old_argstr[i]=='\0') 
			{
				old_args[count] = (char*)malloc(j+1);
				strncpy(old_args[count],old_argstr+offset,j);
				count++;
				j=0;
				offset = i+1;
			}
			else j++;
			i++;

		}
 		i=0,j=0,k=0,count=0,offset=0;
		while(i<strlen(new_argstr)+1){
			if(new_argstr[i]==',' || new_argstr[i]=='\0') 
			{
				new_args[count] = (char*)malloc(j+1);
				strncpy(new_args[count],new_argstr+offset,j);
				count++;
				j=0;
				offset = i+1;
			}
			else j++;
			i++;

		}
	}

	char *final = action;
	int tag=0;
	i=0,j=0,k=0,count=0;
	for(j=0;j<num_args;j++)
	{
		i=0;
		int size = strlen(action);
		while(i<size)
		{
			if(action[i]=='%')
			{
				if(tag==0)
				{
					tag=1;
					char *temp1 = (char*)malloc(strlen(old_args[j])+1);
					if(strlen(action+i)>=strlen(old_args[j]))
					{
						strncpy(temp1,action+i,strlen(old_args[j]));
							if(strcmp(temp1,old_args[j])==0)
							{
								char* str1 = final;
								final = (char*)malloc(strlen(final)+strlen(new_args[j])-strlen(old_args[j])+1);
								int n = find(str1);
								if(n!=-1)
								{
									strncpy(final,str1,n);
									strcat(final,new_args[j]);
									strcat(final,str1+n+strlen(old_args[j]));

								}
							}
					}
				}
				else tag=0;
			}
			i++;
		}
	}
	final = remove_delimiters(final);
	return final;
}

int find(char* s){
	int i=0;
	while(s[i]!='\0'){
		if(s[i]=='%')
			return i;
		i++;
	}
	return -1;
}
int count_args(char* s){
	int i=0;
	int count=1;
	while(s[i]!='\0'){
		if(s[i]==',') count++;
		i++;
	}
	return count;
}
char* remove_delimiters(char* s){
	int i=0;
	char* temp;
	if(strchr(s,'%')!=NULL){
		while(s[i]!='\0')
		{
			if(s[i]=='%'){
				temp = (char*)malloc(strlen(s));
				strncpy(temp,s,i);
				strcat(temp,s+i+1);
				s = temp;
			}
			i++;
		}
		return temp;
	}
	return s;
}
