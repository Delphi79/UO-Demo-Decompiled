// Real-C
#include "ENGINE.hpp"

#include "sndfx.h"

TRIGGER( use )(obj user)
{
  systemMessage(user, "Select the clothing to dye.");
  targetObj(user, this);
  return(0x00);
}

TRIGGER( targetobj )(obj user, obj usedon)
{
  if(usedon == NULL())
  {
    return(0x00);
  }
  int Q66P = getObjType(usedon);
  int Q61R = getHue(this);
  loc Q66R = loc( getLocation(usedon) );
  sfx(Q66R, 0x023E, 0x00);
  setHue(usedon, Q61R);
  return(0x00);
}