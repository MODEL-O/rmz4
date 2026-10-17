// undefined FUN_080f7edc(void)
// entry 0x80f7edc


undefined4 FUN_080f7edc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x58) + DAT_080f7ef8;
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 < *(int *)(param_1 + 100)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 100);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return in_lr;
}


