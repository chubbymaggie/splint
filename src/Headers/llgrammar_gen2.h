/*
** Inserted at beginning of c files generated by bison
** REMEMBER:  Change bison.reset too.
*/

/*@-allmacros@*/
/*@+boolint@*/
/*@+charint@*/
/*@-macroparams@*/
/*@-macroundef@*/
/*@-unreachable@*/
/*@-macrospec@*/
/*@-varuse@*/
/*@+ignorequals@*/
/*@-macrostmt@*/
/*@-noeffect@*/
/*@-shadow@*/
/*@-exitarg@*/
/*@-macroredef@*/
/*@-uniondef@*/
/*@-compdef@*/
/*@-matchfields@*/
/*@-exportlocal@*/
/*@-evalorderuncon@*/
/*@-exportheader@*/
/*@-typeuse@*/
/*@-redecl@*/
/*@-redef@*/
/*@-noparams@*/
/*@-ansireserved@*/
/*@-fielduse@*/
/*@-ifblock@*/
/*@-elseifcomplete@*/
/*@-whileblock@*/
/*@-forblock@*/
/*@-branchstate@*/
/*@-readonlytrans@*/
/*@-namechecks@*/
/*@-usedef@*/
/*@-systemunrecog@*/
/*@-dependenttrans@*/
/*@-unqualifiedtrans@*/
/*@-nullassign@*/
/*@-nullpass@*/
/*@-nullptrarith*/
/*@-usereleased@*/
/*@-declundef@*/

/*drl added 11/27/2001*/
/*@-bounds@*/
/* < end of bison.head > */

#ifndef BISON_LLGRAMMAR_TAB_H
# define BISON_LLGRAMMAR_TAB_H

#ifndef YYSTYPE
typedef union 
{
  ltoken ltok;  /* a leaf is also an ltoken */
  qual typequal;
  unsigned int count;
  /*@only@*/ ltokenList ltokenList;
  /*@only@*/ abstDeclaratorNode abstDecl; 
  /*@only@*/ declaratorNode declare;
  /*@only@*/ declaratorNodeList declarelist;
  /*@only@*/ typeExpr typeexpr;
  /*@only@*/ arrayQualNode array;
  /*@only@*/ quantifierNode quantifier;
  /*@only@*/ quantifierNodeList quantifiers;
  /*@only@*/ varNode var;
  /*@only@*/ varNodeList vars;
  /*@only@*/ storeRefNode storeref;
  /*@only@*/ storeRefNodeList storereflist;
  /*@only@*/ termNode term;
  /*@only@*/ termNodeList termlist;
  /*@only@*/ programNode program; 
  /*@only@*/ stmtNode stmt;
  /*@only@*/ claimNode claim;
  /*@only@*/ typeNode type;
  /*@only@*/ iterNode iter;
  /*@only@*/ fcnNode fcn;
  /*@only@*/ fcnNodeList fcns;
  /*@only@*/ letDeclNode letdecl;
  /*@only@*/ letDeclNodeList letdecls;
  /*@only@*/ lclPredicateNode lclpredicate;
  /*@only@*/ modifyNode modify;
  /*@only@*/ paramNode param;
  /*@only@*/ paramNodeList paramlist;
  /*@only@*/ declaratorInvNodeList declaratorinvs;	
  /*@only@*/ declaratorInvNode declaratorinv;	
  /*@only@*/ abstBodyNode abstbody;
  /*@only@*/ abstractNode abstract;
  /*@only@*/ exposedNode exposed;
  /*@only@*/ pointers pointers;
  /*    taggedUnionNode taggedunion; */
  /*@only@*/ globalList globals;
  /*@only@*/ constDeclarationNode constdeclaration;
  /*@only@*/ varDeclarationNode vardeclaration;
  /*@only@*/ varDeclarationNodeList vardeclarationlist;
  /*@only@*/ initDeclNodeList initdecls;
  /*@only@*/ initDeclNode initdecl;
  /*@only@*/ stDeclNodeList structdecls;
  /*@only@*/ stDeclNode structdecl;
  /*@only@*/ strOrUnionNode structorunion;
  /*@only@*/ enumSpecNode enumspec; 
  /*@only@*/ lclTypeSpecNode lcltypespec;
  /*@only@*/ typeNameNode typname;
  /*@only@*/ opFormNode opform;
  /*@only@*/ sigNode signature;
  /*@only@*/ nameNode name;
  /*@only@*/ typeNameNodeList namelist;
  /*@only@*/ replaceNode replace;	
  /*@only@*/ replaceNodeList replacelist;
  /*@only@*/ renamingNode renaming;
  /*@only@*/ traitRefNode traitref;
  /*@only@*/ traitRefNodeList traitreflist;
  /*@only@*/ importNode import;
  /*@only@*/ importNodeList importlist;
  /*@only@*/ interfaceNode iface;
  /*@only@*/ interfaceNodeList interfacelist; 
  /*@only@*/ CTypesNode ctypes;
  /*@-redef@*/
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
# define	simpleOp	257
# define	PREFIX_OP	258
# define	POSTFIX_OP	259
# define	LLT_MULOP	260
# define	LLT_SEMI	261
# define	LLT_VERTICALBAR	262
# define	ITERATION_OP	263
# define	LLT_LPAR	264
# define	LLT_LBRACKET	265
# define	selectSym	266
# define	LLT_IF_THEN_ELSE	267
# define	logicalOp	268
# define	eqSepSym	269
# define	equationSym	270
# define	commentSym	271
# define	LLT_WHITESPACE	272
# define	LLT_EOL	273
# define	LLT_TYPEDEF_NAME	274
# define	quantifierSym	275
# define	openSym	276
# define	closeSym	277
# define	sepSym	278
# define	simpleId	279
# define	mapSym	280
# define	markerSym	281
# define	preSym	282
# define	postSym	283
# define	anySym	284
# define	LLT_COLON	285
# define	LLT_COMMA	286
# define	LLT_EQUALS	287
# define	LLT_LBRACE	288
# define	LLT_RBRACE	289
# define	LLT_RBRACKET	290
# define	LLT_RPAR	291
# define	LLT_QUOTE	292
# define	eqOp	293
# define	LLT_CCHAR	294
# define	LLT_CFLOAT	295
# define	LLT_CINTEGER	296
# define	LLT_LCSTRING	297
# define	LLT_ALL	298
# define	LLT_ANYTHING	299
# define	LLT_BE	300
# define	LLT_BODY	301
# define	LLT_CLAIMS	302
# define	LLT_CHECKS	303
# define	LLT_CONSTANT	304
# define	LLT_ELSE	305
# define	LLT_ENSURES	306
# define	LLT_FOR	307
# define	LLT_FRESH	308
# define	LLT_IF	309
# define	LLT_IMMUTABLE	310
# define	LLT_IMPORTS	311
# define	LLT_CONSTRAINT	312
# define	LLT_ISSUB	313
# define	LLT_LET	314
# define	LLT_MODIFIES	315
# define	LLT_MUTABLE	316
# define	LLT_NOTHING	317
# define	LLT_INTERNAL	318
# define	LLT_FILESYS	319
# define	LLT_OBJ	320
# define	LLT_OUT	321
# define	LLT_SEF	322
# define	LLT_ONLY	323
# define	LLT_PARTIAL	324
# define	LLT_OWNED	325
# define	LLT_DEPENDENT	326
# define	LLT_KEEP	327
# define	LLT_KEPT	328
# define	LLT_TEMP	329
# define	LLT_SHARED	330
# define	LLT_UNIQUE	331
# define	LLT_UNUSED	332
# define	LLT_EXITS	333
# define	LLT_MAYEXIT	334
# define	LLT_NEVEREXIT	335
# define	LLT_TRUEEXIT	336
# define	LLT_FALSEEXIT	337
# define	LLT_UNDEF	338
# define	LLT_KILLED	339
# define	LLT_CHECKMOD	340
# define	LLT_CHECKED	341
# define	LLT_UNCHECKED	342
# define	LLT_CHECKEDSTRICT	343
# define	LLT_TRUENULL	344
# define	LLT_FALSENULL	345
# define	LLT_LNULL	346
# define	LLT_LNOTNULL	347
# define	LLT_RETURNED	348
# define	LLT_OBSERVER	349
# define	LLT_EXPOSED	350
# define	LLT_REFCOUNTED	351
# define	LLT_REFS	352
# define	LLT_RELNULL	353
# define	LLT_RELDEF	354
# define	LLT_KILLREF	355
# define	LLT_NULLTERMINATED	356
# define	LLT_TEMPREF	357
# define	LLT_NEWREF	358
# define	LLT_PRIVATE	359
# define	LLT_REQUIRES	360
# define	LLT_RESULT	361
# define	LLT_SIZEOF	362
# define	LLT_SPEC	363
# define	LLT_TAGGEDUNION	364
# define	LLT_THEN	365
# define	LLT_TYPE	366
# define	LLT_TYPEDEF	367
# define	LLT_UNCHANGED	368
# define	LLT_USES	369
# define	LLT_CHAR	370
# define	LLT_CONST	371
# define	LLT_DOUBLE	372
# define	LLT_ENUM	373
# define	LLT_FLOAT	374
# define	LLT_INT	375
# define	LLT_ITER	376
# define	LLT_YIELD	377
# define	LLT_LONG	378
# define	LLT_SHORT	379
# define	LLT_SIGNED	380
# define	LLT_UNKNOWN	381
# define	LLT_STRUCT	382
# define	LLT_TELIPSIS	383
# define	LLT_UNION	384
# define	LLT_UNSIGNED	385
# define	LLT_VOID	386
# define	LLT_VOLATILE	387
# define	LLT_PRINTFLIKE	388
# define	LLT_SCANFLIKE	389
# define	LLT_MESSAGELIKE	390


extern YYSTYPE yllval;

#endif /* not BISON_LLGRAMMAR_TAB_H */
/*
** Resets all flags in bison.head
*/


/*@=allmacros@*/
/*@=boolint@*/
/*@=charint@*/
/*@=macroparams@*/
/*@=macroundef@*/
/*@=unreachable@*/
/*@=macrospec@*/
/*@=varuse@*/
/*@=ignorequals@*/
/*@=macrostmt@*/
/*@=noeffect@*/
/*@=shadow@*/
/*@=exitarg@*/
/*@=macroredef@*/
/*@=uniondef@*/
/*@=compdef@*/
/*@=matchfields@*/
/*@=exportlocal@*/
/*@=evalorderuncon@*/
/*@=exportheader@*/
/*@=typeuse@*/
/*@=redecl@*/
/*@=redef@*/
/*@=noparams@*/
/*@=ansireserved@*/
/*@=fielduse@*/
/*@=ifblock@*/
/*@=elseifcomplete@*/
/*@=whileblock@*/
/*@=forblock@*/
/*@=branchstate@*/
/*@=readonlytrans@*/
/*@=namechecks@*/
/*@=usedef@*/
/*@=systemunrecog@*/
/*@=dependenttrans@*/
/*@=unqualifiedtrans@*/
/*@=declundef@*/


/*drl added 11/27/2001*/
/*@=bounds@*/
