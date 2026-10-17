// undefined FUN_0802aa9c(void)
// entry 0x802aa9c


undefined4 FUN_0802aa9c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = DAT_0802aad8;
  *DAT_0802aad8 = (DAT_0802aae0 & *DAT_0802aadc) * 0x100 + 0x7800;
  iVar3 = (int)piVar1 + DAT_0802aae4;
  FUN_08003470(iVar3);
  puVar2 = DAT_0802aae8;
  FUN_0801c79c(*DAT_0802aae8);
  FUN_0801c924(*puVar2,iVar3);
  FUN_08003420(iVar3);
  return in_lr;
}


