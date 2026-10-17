// undefined FUN_08066190(void)
// entry 0x8066190


uint FUN_08066190(void)

{
  uint uVar1;
  
  uVar1 = *DAT_080661ac * DAT_080661b0 + DAT_080661b4;
  *DAT_080661ac = uVar1 & 0x7fffffff;
  return (uVar1 & 0x7fffffff) >> 0x10 & 3;
}


