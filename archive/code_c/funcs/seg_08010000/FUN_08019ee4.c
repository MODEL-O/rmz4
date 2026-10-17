// undefined FUN_08019ee4(void)
// entry 0x8019ee4


undefined4 FUN_08019ee4(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)(DAT_08019f00 + DAT_08019f04);
  if (*piVar2 == 0) {
    iVar1 = FUN_08103830(0);
    *piVar2 = iVar1;
  }
  return in_lr;
}


