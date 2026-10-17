// undefined FUN_080b6da0(void)
// entry 0x80b6da0


undefined4 FUN_080b6da0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080b6e38);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    iVar2 = *(int *)(iVar3 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * 0x4000;
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar3 = *(int *)(iVar3 + 0x58);
    *(int *)(param_1 + 0x60) = iVar3;
    *(int *)(param_1 + 100) = iVar2 - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = iVar3 - *(int *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  iVar2 = (uint)*(byte *)(param_1 + 0x12) * 8;
  iVar3 = iVar2 * -*(int *)(param_1 + 100);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + (iVar3 >> 8);
  iVar2 = iVar2 * -*(int *)(param_1 + 0x68);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (iVar2 >> 8);
  FUN_080b72a0(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


