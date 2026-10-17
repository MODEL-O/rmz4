// undefined FUN_080abc00(void)
// entry 0x80abc00


undefined4 FUN_080abc00(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  iVar3 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar3;
  iVar3 = (int)*(short *)((0x10U - iVar3 & 0x3f) * 8 + DAT_080abc74);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  sVar1 = *(short *)((iVar3 >> 2 & 0xffU) * 2 + DAT_080abc74);
  sVar2 = sVar1 * 3 + 0x100;
  *(short *)(param_1 + 0xc0) = sVar2;
  *(short *)(param_1 + 0xc2) = sVar2;
  *(char *)(param_1 + 0xbd) = (char)((int)sVar1 / 2) + -0x80;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


