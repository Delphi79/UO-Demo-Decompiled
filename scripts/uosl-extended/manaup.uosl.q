// UOSL (enhanced)
inherits spelskil;

function void Q4KR(obj user, obj usedon)
{
  restoreMana(usedon);
  setCurMana(usedon, 0x5A);
  return;
}

trigger use(obj user)
{
  targetObj(user, this);
  return(0x00);
}

trigger targetobj(obj user, obj usedon)
{
  Q4KR(user, usedon);
  return(0x00);
}