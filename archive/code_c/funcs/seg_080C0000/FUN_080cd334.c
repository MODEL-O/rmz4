// undefined FUN_080cd334(void)
// entry 0x80cd334


undefined4 FUN_080cd334(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  FUN_08002b10(DAT_080cd390);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd394);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x54);
  iVar3 = uVar4 * 2 + -1;
  *(int *)(param_1 + 100) = iVar3;
  *(int *)(param_1 + 0x5c) = iVar3 * 0x480;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_0801cc9c(param_1);
  FUN_0801d3d0(param_1,6);
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar4 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar4 & 1) << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080cd3e8,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080cd3ec(param_1);
  return in_lr;
}


