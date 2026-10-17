// undefined FUN_080f60ec(void)
// entry 0x80f60ec


undefined4 FUN_080f60ec(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080f6148);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x5c) + -0x20;
  *(int *)(param_1 + 0x5c) = iVar1;
  if (iVar1 < DAT_080f614c) {
    *(int *)(param_1 + 0x5c) = DAT_080f614c;
  }
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  if (DAT_080f6150 < iVar1) {
    *(int *)(param_1 + 0x54) = DAT_080f6150;
  }
  if (*(int *)(param_1 + 0x54) <= DAT_080f6154) {
    *(int *)(param_1 + 0x54) = DAT_080f6154 + 1;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + DAT_080f6158;
  return in_lr;
}


