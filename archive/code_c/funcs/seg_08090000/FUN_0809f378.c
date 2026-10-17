// undefined FUN_0809f378(void)
// entry 0x809f378


undefined4 FUN_0809f378(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    FUN_08005784(param_1 + 0x74,DAT_0809f3a4);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


