/*
** LCLint - annotation-assisted static program checker
** Copyright (C) 1994-2001 University of Virginia,
**         Massachusetts Institute of Technology
**
** This program is free software; you can redistribute it and/or modify it
** under the terms of the GNU General Public License as published by the
** Free Software Foundation; either version 2 of the License, or (at your
** option) any later version.
** 
** This program is distributed in the hope that it will be useful, but
** WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** General Public License for more details.
** 
** The GNU General Public License is available from http://www.gnu.org/ or
** the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
** MA 02111-1307, USA.
**
** For information on lclint: lclint-request@cs.virginia.edu
** To report a bug: lclint-bug@cs.virginia.edu
** For more information: http://lclint.cs.virginia.edu
*/
/*
** annotationInfo.c
*/

# include "lclintMacros.nf"
# include "basic.h"
# include "mtContextNode.h"

annotationInfo annotationInfo_create (cstring name,
				      metaStateInfo state, mtContextNode context, 
				      int value, fileloc loc)
{
  annotationInfo res = (annotationInfo) dmalloc (sizeof (*res));

  res->name = name;
  res->state = state;
  res->context = context;
  res->value = value;
  res->loc = loc;

  return res;
}

void annotationInfo_free (annotationInfo ainfo)
{
  if (annotationInfo_isDefined (ainfo))
    {
      cstring_free (ainfo->name);
      fileloc_free (ainfo->loc);
      sfree (ainfo);
    }
}

cstring annotationInfo_getName (annotationInfo ainfo)
{
  llassert (annotationInfo_isDefined (ainfo));
  return ainfo->name;
}

/*@observer@*/ cstring annotationInfo_unparse (annotationInfo ainfo)
{
  return annotationInfo_getName (ainfo);
}

/*@observer@*/ metaStateInfo annotationInfo_getState (annotationInfo a) /*@*/ 
{
  llassert (annotationInfo_isDefined (a));
  return a->state;
}

/*@observer@*/ fileloc annotationInfo_getLoc (annotationInfo ainfo) /*@*/ 
{
  llassert (annotationInfo_isDefined (ainfo));
  return ainfo->loc;
}

int annotationInfo_getValue (annotationInfo a) /*@*/ 
{
  llassert (annotationInfo_isDefined (a));
  return a->value;
}


bool annotationInfo_matchesContext (annotationInfo a, uentry ue)
{
  /*
  ** Returns true iff the annotation context matches the uentry.
  */

  mtContextNode mcontext;

  llassert (annotationInfo_isDefined (a));
  mcontext = a->context;

  if (mtContextNode_matchesEntry (mcontext, ue))
    {
      /* Matches annotation context, must also match meta state context. */
      metaStateInfo minfo = a->state;

      if (mtContextNode_matchesEntry (metaStateInfo_getContext (minfo), ue))
	{
	  return TRUE;
	}
      else
	{
	  return FALSE;
	}
    }
  else
    {
      return FALSE;
    }
}

bool annotationInfo_matchesContextRef (annotationInfo a, sRef sr)
{
  /*
  ** Returns true iff the annotation context matches the uentry.
  */

  mtContextNode mcontext;

  llassert (annotationInfo_isDefined (a));
  mcontext = a->context;

  if (mtContextNode_matchesRef (mcontext, sr))
    {
      /* Matches annotation context, must also match meta state context. */
      metaStateInfo minfo = a->state;

      if (mtContextNode_matchesRef (metaStateInfo_getContext (minfo), sr))
	{
	  return TRUE;
	}
      else
	{
	  return FALSE;
	}
    }
  else
    {
      return FALSE;
    }
}

cstring annotationInfo_dump (annotationInfo ainfo)
{
  llassert (annotationInfo_isDefined (ainfo));
  return ainfo->name;
}

/*@observer@*/ annotationInfo annotationInfo_undump (char **s)
{
  cstring mname = reader_readUntil (s, '.');
  annotationInfo ainfo;
  
  llassert (cstring_isDefined (mname));
  ainfo = context_lookupAnnotation (mname);

  if (annotationInfo_isUndefined (ainfo))
    {
      llfatalerrorLoc
	(message ("Library uses undefined annotation %s.  Must use same -mts flags as when library was created.",
		  mname));
    }
  else
    {
      cstring_free (mname);
      return ainfo;
    }

  BADBRANCH;
}