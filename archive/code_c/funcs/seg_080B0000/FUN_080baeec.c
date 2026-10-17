// undefined FUN_080baeec(void)
// entry 0x80baeec


undefined4 FUN_080baeec(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  uVar3 = (uint)*(byte *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080baf80);
    FUN_0801cf00(param_1,DAT_080baf84);
    uVar3 = (bVar1 >> 4 & 1) + 1 & 1;
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    *(undefined4 *)(param_1 + 100) = 0x30;
    *(uint *)(param_1 + 0x60) = uVar3 * 2 + -1;
    *(char *)(param_1 + 0x13) = (char)uVar3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801d134(param_1);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (0x600 < iVar2) {
    *(undefined4 *)(param_1 + 0x5c) = 0x600;
  }
  if (-1 < (int)((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4)) * (uVar3 * 2 + -1))) {
    *(undefined1 *)(iVar4 + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


