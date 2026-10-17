// undefined FUN_080bcca4(void)
// entry 0x80bcca4


undefined4 FUN_080bcca4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 1) != 0) &&
     (iVar4 = *(int *)(param_1 + 0x2c), (*(uint *)(param_1 + 0x14) & 0x20000) != 0)) {
    uVar2 = *DAT_080bcd30 * DAT_080bcd34 + DAT_080bcd38;
    *DAT_080bcd30 = uVar2 & 0x7fffffff;
    *(undefined1 *)(iVar4 + 0xb8) = 1;
    iVar3 = (int)*(short *)(((uVar2 & 0x7fffffff) >> 0x10 & 0xf | 0x50) * 2 + DAT_080bcd3c);
    iVar1 = iVar3 * 3;
    *(int *)(iVar4 + 0x5c) = iVar1;
    *(int *)(iVar4 + 0x60) = iVar1;
    iVar3 = iVar3 * -0x300;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar4 + 0x60) = iVar3 >> 8;
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      *(int *)(iVar4 + 0x5c) = iVar3 >> 8;
    }
    iVar4 = *(int *)(iVar4 + 0x28) + DAT_080bcd40;
    if (*(int *)(iVar4 + 0x3c) == 1) {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 10;
      FUN_08002b10(0x1a4);
    }
  }
  return in_lr;
}


