// undefined FUN_080d1d08(void)
// entry 0x80d1d08


undefined4 FUN_080d1d08(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((*(ushort *)(DAT_080d1d30 + 0x1d0) & 0x7f) == 2) {
    iVar1 = FUN_08007b84(param_1);
  }
  else {
    iVar1 = *(int *)(DAT_080d1d30 + DAT_080d1d4c);
  }
  if (iVar1 < iVar2) {
    FUN_080d1bcc(param_1,9,param_2);
  }
  else {
    FUN_080d1bcc(param_1,1,param_2);
  }
  return in_lr;
}


