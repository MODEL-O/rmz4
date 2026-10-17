// undefined FUN_080ce3f8(void)
// entry 0x80ce3f8


undefined4 FUN_080ce3f8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xbc);
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080ce49c);
    FUN_0801cf00(param_1,DAT_080ce4a0);
    iVar4 = 0x200;
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = DAT_080ce4a4;
  iVar2 = iVar4 * *(short *)((bVar1 + 0x40 & 0xff) * 2 + DAT_080ce4a4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar2 >> 8);
  iVar3 = iVar4 * *(short *)((uint)bVar1 * 2 + iVar3);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  iVar4 = iVar4 + *(int *)(param_1 + 100);
  if (iVar4 < 0x80) {
    iVar4 = 0x80;
  }
  *(int *)(param_1 + 0xbc) = iVar4;
  if (iVar4 == 0x80) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


