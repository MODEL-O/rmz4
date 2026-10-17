// undefined FUN_080b0ed4(void)
// entry 0x80b0ed4


undefined4 FUN_080b0ed4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  iVar3 = *(int *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080b0f70);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(param_1 + 0x5c) = iVar2 - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x60) = iVar3 - *(int *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801d134(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  FUN_080b1004(param_1);
  uVar1 = FUN_08128fb8((0x60 - (uint)*(byte *)(param_1 + 0x12)) * 0x40,0x60);
  iVar3 = (int)*(short *)((uVar1 & 0xff) * 2 + DAT_080b0f74);
  iVar2 = iVar3 * *(int *)(param_1 + 0x5c);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + (iVar2 >> 8);
  iVar3 = iVar3 * *(int *)(param_1 + 0x60);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (iVar3 >> 8);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


