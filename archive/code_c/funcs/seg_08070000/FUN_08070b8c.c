// undefined FUN_08070b8c(void)
// entry 0x8070b8c


undefined4 FUN_08070b8c(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar2 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(uint *)(param_1 + 0x5c) = ((bVar1 & 1) * 2 + -1) * -0x100;
    *(undefined4 *)(param_1 + 0x60) = DAT_08070c2c;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08070c34) * 4 +
                               DAT_08070c30)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_08070c38))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) < 0) {
    iVar3 = FUN_080737e8(param_1);
    if (iVar3 != 0) {
      FUN_080739cc(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    iVar3 = FUN_08073850(param_1);
    if (iVar3 != 0) {
      FUN_08073a68(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
      bVar2 = true;
    }
  }
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((bVar1 & 1) == 0) {
    iVar3 = FUN_0807371c(param_1);
    if (iVar3 != 0) {
      FUN_080738b4(param_1);
    }
  }
  else {
    iVar3 = FUN_08073784(param_1);
    if (iVar3 != 0) {
      FUN_08073940(param_1);
    }
  }
  if (bVar2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


