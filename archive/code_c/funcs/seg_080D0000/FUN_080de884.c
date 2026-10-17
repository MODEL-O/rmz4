// undefined FUN_080de884(void)
// entry 0x80de884


undefined4 FUN_080de884(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = DAT_080de8e0 * *DAT_080de8dc + DAT_080de8e4;
  *DAT_080de8dc = uVar3 & 0x7fffffff;
  uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080de8e8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = 0x80;
  *(undefined1 *)(param_1 + 0x12) = 0x40;
  FUN_0801cc9c(param_1);
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  FUN_0801cf00(param_1,DAT_080de924);
  FUN_080de928(param_1);
  return in_lr;
}


