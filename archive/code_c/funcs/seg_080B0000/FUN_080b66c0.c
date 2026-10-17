// undefined FUN_080b66c0(void)
// entry 0x80b66c0


undefined4 FUN_080b66c0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  byte abStack_24 [4];
  undefined4 local_20 [2];
  
  local_20[1] = DAT_080b6764[1];
  local_20[0] = *DAT_080b6764;
  FUN_08129258(abStack_24,DAT_080b6768,2);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080b676c);
    FUN_0801cf00(param_1,*(undefined2 *)(local_20 + bVar1));
    *(uint *)(param_1 + 100) = (uint)bVar2 * 0x10 + 0x40;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') && ('\x02' < *(char *)(param_1 + 0x71))) {
    FUN_08005784(param_1 + 0x74,(uint)abStack_24[bVar1] * 0x18 + DAT_080b676c);
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  iVar3 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar3;
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


