// undefined FUN_080dab38(void)
// entry 0x80dab38


undefined4 FUN_080dab38(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dab80);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) = (uVar3 * -2 + 1) * 0x40;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0x14;
  FUN_0801cc9c(param_1);
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar3 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar3 & 1) << 4);
  FUN_0801cf00(param_1,DAT_080dabbc);
  FUN_080dabc0(param_1);
  return in_lr;
}


