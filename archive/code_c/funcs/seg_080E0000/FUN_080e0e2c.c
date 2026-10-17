// undefined FUN_080e0e2c(void)
// entry 0x80e0e2c


undefined4 FUN_080e0e2c(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0e8c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) = -(uVar4 * 0x100 + -0x80);
  *(undefined4 *)(param_1 + 0x60) = DAT_080e0e90;
  uVar3 = *DAT_080e0e94 * DAT_080e0e98 + DAT_080e0e9c;
  *DAT_080e0e94 = uVar3 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar3 >> 0x10) & 3) + 0x10;
  FUN_0801cc9c(param_1);
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar4 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar4 & 1) << 4);
  FUN_0801cf00(param_1,DAT_080e0ed8);
  FUN_080e0edc(param_1);
  return in_lr;
}


