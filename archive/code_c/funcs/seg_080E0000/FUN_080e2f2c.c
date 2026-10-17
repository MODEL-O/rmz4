// undefined FUN_080e2f2c(void)
// entry 0x80e2f2c


undefined4 FUN_080e2f2c(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080e2f74);
  FUN_0801cff0(param_1);
  uVar2 = *DAT_080e2f78 * DAT_080e2f7c + DAT_080e2f80;
  *DAT_080e2f78 = uVar2 & 0x7fffffff;
  uVar2 = (uVar2 & 0x7fffffff) >> 0x10 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(undefined1 *)(param_1 + 0x12) = 6;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e2fcc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080e2efc(param_1);
  return in_lr;
}


