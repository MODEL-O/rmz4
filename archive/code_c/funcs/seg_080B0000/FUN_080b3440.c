// undefined FUN_080b3440(void)
// entry 0x80b3440


undefined4 FUN_080b3440(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      iVar1 = *(int *)(param_1 + 0xb8) + 0x1600;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xb8) + DAT_080b351c;
    }
    *(int *)(param_1 + 0xc0) = iVar1;
    uVar2 = FUN_08128bdc((*(int *)(*(int *)(param_1 + 0x2c) + 0x54) - *(int *)(param_1 + 0x54)) *
                         0x100 >> 0x10,
                         (*(int *)(*(int *)(param_1 + 0x2c) + 0x58) -
                         (*(int *)(param_1 + 0x58) + 0x800)) * 0x100 >> 0x10);
    iVar1 = DAT_080b3520;
    uVar2 = (uVar2 & 0xffff) >> 8;
    *(int *)(param_1 + 0x5c) = (int)*(short *)((uVar2 + 0x40 & 0xff) * 2 + DAT_080b3520);
    *(int *)(param_1 + 0x60) = (int)*(short *)(uVar2 * 2 + iVar1);
    *(undefined1 *)(param_1 + 0xb7) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(iVar4 + 0x54) - iVar1 >> 8;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 4) {
    iVar1 = *(int *)(iVar4 + 0x58) - (iVar3 + 0x800) >> 8;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 4) {
      *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54);
      *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + DAT_080b3524;
      *(undefined1 *)(iVar4 + 0xb5) = 1;
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


