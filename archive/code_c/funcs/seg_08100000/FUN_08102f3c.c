// undefined FUN_08102f3c(void)
// entry 0x8102f3c


undefined4 FUN_08102f3c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = (undefined2)DAT_08102fb0;
  *(undefined2 *)(param_1 + 0xbe) = uVar1;
  *(short *)(param_1 + 0xc0) = (short)DAT_08102fb4;
  *(undefined2 *)(param_1 + 0xc2) = uVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08102fb8,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x100;
  *(undefined1 *)(param_1 + 0xb9) = 1;
  *(undefined1 *)(param_1 + 0xb8) = 0x30;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


