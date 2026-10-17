// undefined FUN_080bf90c(void)
// entry 0x80bf90c


undefined4 FUN_080bf90c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  iVar1 = 0x100 - *(short *)(((uint)*(byte *)(param_1 + 0x12) * -2 + 0x80 & 0xff) * 2 + DAT_080bf978
                            );
  *(short *)(param_1 + 0x50) = (short)iVar1;
  iVar1 = iVar1 * -0x2000;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + (iVar1 >> 8);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


