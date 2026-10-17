// undefined FUN_080c8120(void)
// entry 0x80c8120


undefined4 FUN_080c8120(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(uint *)(param_1 + 0x5c) = ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * 0x1c0;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  sVar1 = FUN_08007c7c(iVar2,*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


