// UOSL (enhanced)
trigger enterrange<0x02>(obj target)
{
  if(isPlayer(target))
  {
    list args = 0x05;
    multimessage(target, "foundme", args);
  }
  return(0x01);
}