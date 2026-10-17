// undefined FUN_080b9d6c(void)
// entry 0x80b9d6c


undefined4 FUN_080b9d6c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = FUN_080b9e30();
  iVar1 = DAT_080b9dc8;
  iVar3 = *(short *)(((uVar2 & 0xff) + 0x40 & 0xff) * 2 + DAT_080b9dc8) * -0x200;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
  iVar3 = *(short *)((uVar2 & 0xff) * 2 + iVar1) * -0x200;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xd) = 2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


