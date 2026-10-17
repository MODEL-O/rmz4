// undefined FUN_080d1d60(void)
// entry 0x80d1d60


undefined4 FUN_080d1d60(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((*(ushort *)(DAT_080d1d88 + 0x1d0) & 0x7f) == 2) {
    iVar1 = FUN_08007b84(param_1);
  }
  else {
    iVar1 = *(int *)(DAT_080d1d88 + DAT_080d1da4);
  }
  if (iVar1 < iVar2) {
    FUN_080d1bcc(param_1,10,param_2);
  }
  else {
    FUN_080d1bcc(param_1,2,param_2);
  }
  return in_lr;
}


