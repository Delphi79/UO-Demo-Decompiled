// UOSL (native)
trigger speech("*")
{
  doLocAnimation(getLocation(this), 0x111C, 0x02, 0x10, 0x00, 0x00);
  return(0x00);
}