// undefined FUN_080a2918(void)
// entry 0x80a2918


undefined4 FUN_080a2918(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c [2];
  
  local_1c[1] = DAT_080a29e8[1];
  local_1c[0] = *DAT_080a29e8;
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_08005784(param_1 + 0x74,DAT_080a29ec);
    FUN_0801cf00(param_1,DAT_080a29f0);
    iVar3 = uVar4 * 2 + -1;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + iVar3 * 0x4000;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + local_1c[bVar1];
    *(int *)(param_1 + 0x5c) = iVar3 * 0x180;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar3 = uVar4 * 2 + -1;
  if (-1 < iVar3 * (iVar2 - *(int *)(param_1 + 100))) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
  }
  iVar3 = (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar3 = (int)*(short *)((iVar3 >> 8 & 0xffU) * 2 + DAT_080a29f4) * local_1c[bVar1];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - (iVar3 >> 8);
  if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 100)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


