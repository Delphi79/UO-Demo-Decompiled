// UOSL (enhanced)
inherits virtueguild;

trigger message<"addedToSpecialGuild">(obj sender, list args)
{
  systemMessage(this, "To get your shield, ask any of Lord British's Guards.");
  setObjVar(this/* comma added by the decompiler post-processor */, "displayGuildAbbr", 0x01);
  return(0x01);
}