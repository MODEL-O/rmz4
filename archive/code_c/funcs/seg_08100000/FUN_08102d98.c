// undefined FUN_08102d98(void)
// entry 0x8102d98


undefined4 FUN_08102d98(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0xbe) = 0x7b00;
  *(short *)(param_1 + 0xc0) = (short)DAT_08102e10;
  *(undefined2 *)(param_1 + 0xc2) = 0x7b00;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08102e14,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x100;
  *(undefined1 *)(param_1 + 0xb9) = 1;
  *(undefined1 *)(param_1 + 0xb8) = 0x30;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


