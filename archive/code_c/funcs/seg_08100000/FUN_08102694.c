// undefined FUN_08102694(void)
// entry 0x8102694


undefined4 FUN_08102694(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(DAT_0810276c + 6) & 0xc0) == 0x40) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08102770);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  *(undefined2 *)(DAT_08102774 + 0x186) = 0x200;
  *(undefined2 *)(DAT_08102778 + 0x186) = 4;
  FUN_0801ceec(param_1);
  *(undefined2 *)(param_1 + 0xbe) = 0xc300;
  *(short *)(param_1 + 0xc0) = (short)DAT_0810277c;
  *(undefined2 *)(param_1 + 0xc2) = 0xc300;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08102780,param_1 + 0x54,1);
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


