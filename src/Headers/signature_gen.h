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

#ifndef BISON_SIGNATURE_TAB_H
# define BISON_SIGNATURE_TAB_H

#ifndef YYSTYPE
typedef union {
  ltoken ltok;  /* a leaf is also an ltoken */
  unsigned int count;
  /*@only@*/  ltokenList ltokenList;
  /*@only@*/  opFormNode opform;
  /*@owned@*/ sigNode signature;
  /*@only@*/  nameNode name;
  /*@owned@*/ lslOp operator;
  /*@only@*/  lslOpList operators;
  /*@-redef@*/ /*@-matchfields@*/ 
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
# define	LST_SIMPLEID	257
# define	LST_LOGICALOP	258
# define	LST_EQOP	259
# define	LST_SIMPLEOP	260
# define	LST_MAPSYM	261
# define	LST_FIELDMAPSYM	262
# define	LST_MARKERSYM	263
# define	LST_ifTOKEN	264
# define	LST_thenTOKEN	265
# define	LST_elseTOKEN	266
# define	LST_LBRACKET	267
# define	LST_RBRACKET	268
# define	LST_SELECTSYM	269
# define	LST_SEPSYM	270
# define	LST_OPENSYM	271
# define	LST_CLOSESYM	272
# define	LST_COLON	273
# define	LST_COMMA	274
# define	LST_EOL	275
# define	LST_COMMENTSYM	276
# define	LST_WHITESPACE	277
# define	LST_QUANTIFIERSYM	278
# define	LST_EQUATIONSYM	279
# define	LST_EQSEPSYM	280
# define	LST_COMPOSESYM	281
# define	LST_LPAR	282
# define	LST_RPAR	283
# define	LST_assertsTOKEN	284
# define	LST_assumesTOKEN	285
# define	LST_byTOKEN	286
# define	LST_convertsTOKEN	287
# define	LST_enumerationTOKEN	288
# define	LST_equationsTOKEN	289
# define	LST_exemptingTOKEN	290
# define	LST_forTOKEN	291
# define	LST_generatedTOKEN	292
# define	LST_impliesTOKEN	293
# define	LST_includesTOKEN	294
# define	LST_introducesTOKEN	295
# define	LST_ofTOKEN	296
# define	LST_partitionedTOKEN	297
# define	LST_traitTOKEN	298
# define	LST_tupleTOKEN	299
# define	LST_unionTOKEN	300
# define	LST_BADTOKEN	301


#endif /* not BISON_SIGNATURE_TAB_H */
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
