// Real-C
#include "ENGINE.hpp"

#include "nrgyvrtxbase.h"

TRIGGER( use )(obj user)
{
  Q4M9(this, user);
  return(0x00);
}

TRIGGER( message , "castspell" )(obj sender, list args)
{
  obj user = Q4BB(this, args);
  if(!isValid(user))
  {
    return(0x00);
  }
  Q5RD(user, this);
  targetLoc(user, this);
  return(0x00);
}

TRIGGER( targetloc )(obj user, loc place, int objtype)
{
  if(!Q4C8(user, this))
  {
    return(0x01);
  }
  if(!isInMap(place))
  {
    return(0x00);
  }
  if(canSeeLoc(user, place) == 0x01)
  {
    if(!Q5YC(user, this))
    {
      return(0x00);
    }
    if(Q4LT(user, place, this))
    {
      Q4JQ(user, place);
    }
    else
    {
      Q4RD(user);
    }
  }
  else
  {
    systemMessage(user, "Target cannot be seen. Try again.");
    targetLoc(user, this);
  }
  return(0x00);
}

TRIGGER( creation )()
{
  return(0x00);
}

TRIGGER( callback , 0x49 )()
{
  obj user = getObjVar(this, "user");
  obj target = getObjVar(this, "target");
  loc Q5NT = loc( getLocation(target) );
  Q4JQ(user, Q5NT);
  return(0x00);
}